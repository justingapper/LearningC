// Pre-processor directives to prevent redundant library loading
#ifndef __MATRIX_CPP
#define __MATRIX_CPP

// include the header declarations
#include "matrix.h"

//*************
//
// CONSTRUCTORS
//
//*************

// Default constructor
template<typename T> 
Matrix<T>::Matrix(unsigned int _rows, unsigned int _cols, const T& _initial) {
  // use vector method to resize outer vector of rows to length _rows
  mat.resize(_rows);
  for (unsigned int i=0; i<mat.size(); i++) {
    // for each row, resize to length _cols of columns
    // and initialize elements to value _initial
    mat[i].resize(_cols, _initial);
  }
  // set private fields rows and cols properly
  rows = _rows;
  cols = _cols;
}

// Copy-constructor
template<typename T> Matrix<T>::Matrix(const Matrix<T>& rhs) {
  // Simply set private fields according to fields
  // of existing Matrix<T> object
  mat = rhs.mat;
  rows = rhs.get_rows();
  cols = rhs.get_cols();
}

// Destructor
// No memory is dynamically allocated in the class,
// so just use default compiler cleanup of memory 
template<typename T> Matrix<T>::~Matrix() {}



//*************
//
// ACCESSORS
//
//*************


// Access individual elements
template<typename T>
T& Matrix<T>::operator() (const unsigned int &row, const unsigned int &col) {
  return this->mat[row][col];
}

// Access individual elements (const)
template<typename T>
const T& Matrix<T>::operator() (const unsigned int &row, const unsigned int &col) 
const {
  return this->mat[row][col];
}

// Get number of rows
template<typename T>
unsigned int Matrix<T>::get_rows() const {
  return this->rows;
}

// Get number of cols
template<typename T>
unsigned int Matrix<T>::get_cols() const {
  return this->cols;
}





//*********************
//
// OPERATOR OVERLOADING
//
//*********************




// Assignment operator
template<typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix<T>& rhs) {
  // If assigning to itself, just return itself
  if (&rhs == this)
    return *this;

  // Store new rows and cols
  unsigned int new_rows = rhs.get_rows();
  unsigned int new_cols = rhs.get_cols();

  // resize to new number of rows
  mat.resize(new_rows);
  // resize each row to new number of cols
  for (unsigned int i=0; i<mat.size(); i++) {
    mat[i].resize(new_cols);
  }

  // assign each element 
  for (unsigned int i=0; i<new_rows; i++) {
    for (unsigned int j=0; j<new_cols; j++) {
      mat[i][j] = rhs(i, j);
    }
  }

  // store new number of rows and columns
  rows = new_rows;
  cols = new_cols;

  // return newly modified object
  return *this;
}


// Addition of two matrices
template<typename T>
Matrix<T> Matrix<T>::operator+(const Matrix<T>& rhs) {
  // Create new matrix to store result, initialize to zero
  Matrix result(rows, cols, 0.0);

  // Add each matrix element-by-element
  for (unsigned int i=0; i<rows; i++) {
    for (unsigned int j=0; j<cols; j++) {
      result(i,j) = this->mat[i][j] + rhs(i,j);
    }
  }

  return result;
}










// Write a function that will return the entries of a matrix
template<typename T>
std::string Matrix<T>::helper(){
  std::stringstream theresult;
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
       theresult << this->mat[i][j] <<",";    
    }
    theresult << std::endl;
  }
    return theresult.str();
}

// Write a function that will allow us print a given matrix
template<typename T>
void Matrix<T>::printme(){
  std::cout << this->helper();
}

// Multiply two matrices
template<typename T>
Matrix<T> Matrix<T>::operator*(const Matrix<T>& rhs){
  Matrix result1(rows, cols,0.0);
 int rhs_rows = rhs.get_rows();
 int rhs_cols = rhs.get_cols();

  if(rows == rhs_cols){
    for(int i = 0; i < rows ; i++){
       for(int j = 0; j < rhs_cols; j++){
              unsigned int thesum = 0;
                 for(int k = 0; k < rhs_rows ; k++){
                        thesum = thesum + mat[i][k]*rhs(k,j);
                 }
                    result1(i,j) =  thesum;
         }
      }

     return result1;
  }
  else
    std::cout << " please, make sure the sizes of the matrices match " << std::endl; 
}

//multiply by a scalar value element-by element
template<typename T>
Matrix<T> Matrix<T>:: operator*(T a_scalar){
  Matrix result2(rows, cols,0.0);
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        result2(i,j) = this-> mat[i][j]*a_scalar;
    }
  }
  return result2;
}

//Add matrices
template<typename T>
Matrix<T> Matrix<T>::add_mat_elmt_by_elmt(const Matrix<T>& amatrix){
  Matrix result3(rows,cols,0.0);
  int the_rows = amatrix.get_rows();
  int the_cols = amatrix.get_cols();
  if( rows == the_rows && cols == the_cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
                  result3(i,j) = this-> mat[i][j] + amatrix(i,j);
        }
        }

    return result3;
  }
  else
     std::cout << "Matrices do not match " << std::endl;
}

//subtract two matrices
template<typename T>
Matrix<T> Matrix<T>::operator-( Matrix<T>& rhs){
    int the_rows = rhs.get_rows();
    int the_cols = rhs.get_cols();
    Matrix result4(rows,cols,0.0);
    if(rows == the_rows &&  cols == the_cols){
                result4 = (*this) + rhs* (T)(-1);
        return result4;
    }
    else
        std::cout << "Matrices do not have the same size" << std::endl;
}

//save matrix to a csv
template<typename T>
void Matrix<T>::save(char* filename){
    std::ofstream outFile;
    outFile.open("filename.csv");
    outFile << this->helper();
    outFile.close();
}

#endif