template<typename T>
class Vector : public Matrix<T> {
public:
    Vector(int size) : Matrix<T>(1, size) {}

    // Vector product
    T DotProduct(const Vector<T>& other) const {
        T result = 0;
        for (int i = 0; i < this->cols; ++i) {
            result += this->data[0][i] * other.data[0][i];
        }
        return result;
    }

    // Scalar product
    Matrix<T> ScalarProduct(const Matrix<T>& other) const {
        Matrix<T> result(1, this->cols);
        for (int i = 0; i < this->cols; ++i) {
            result.Set(0, i, this->data[0][i] * other.Get(0, i));
        }
        return result;
    }
};
