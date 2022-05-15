#ifndef MODULE_07_ITER_HPP
#define MODULE_07_ITER_HPP


template<typename T>
void iter(T *array, int size, void (*func)(T &)) {
    for (int i = 0; i < size; i++)
        func(array[i]);
}

#endif //MODULE_07_ITER_HPP
