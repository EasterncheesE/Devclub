#ifndef VECTOR_T_H
#define VECTOR_T_H

template<class T>
class VectorT {
    private:
        T object;
    public:
        VectorT();
        void SetValue( T value );
        T GetValue();

};
#endif // VECTOR_T_H