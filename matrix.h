template<typename T>
class Matrix {
private:
    int rows;
    int cols;
    T** data;

public:
    Matrix(int rows, int cols);
    Matrix(const Matrix& other);
    ~Matrix();

    // Methods
    void Set(int row, int col, T value);
    T Get(int row, int col) const;
    void Print() const;

    // Overloaded operators
    Matrix<T>& operator=(const Matrix<T>& other);
    Matrix<T> operator+(const Matrix<T>& other) const;
    Matrix<T> operator-(const Matrix<T>& other) const;
    Matrix<T> operator*(const Matrix<T>& other) const;
};
