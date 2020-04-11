#include <iostream>
using namespace std;

void * _bubblesort_(
	void * _array_,
	void (*_puntero_) (void *, int _i, int _k),
	int _tam_
){
	int _k = 0;
	for (int i = 0; i < _tam_ ; i ++)
		for(int k = 0; k < _tam_-1; k++)
			_puntero_(_array_,k,_k);
	return _array_;
}

void  _b_int_ (void * _vector_, int _i,int _k){

    auto vec = ((int*)_vector_);

    if(vec[_i] > vec[_i + 1]){
        swap(vec[_i],vec[_i+1]);
    }
}

void  _b_float_ (void * _vector_, int _i,int _k){

    auto vec = ((float*)_vector_);

    if(vec[_i] > vec[_i+1]){
        swap(vec[_i], vec[_i+1]);
    }


}

void  _b_double_ (void * _vector_, int _i,int _k){

    auto vec = ((double*)_vector_);

    if(vec[_i] > vec[_i + 1])
        swap(vec[_i],vec[_i + 1]);

}

void  _b_char_ (void * _vector_, int _i,int _k){

    auto vec = ((char*)_vector_);

    if(vec[_i] > vec[_i +1 ]){
        swap(vec[_i],vec[_i + 1]);
    }
}


int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
	float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,_b_int_,5);
	cout << "int: ";
	for(auto i: _array_1){
	    cout << i << " ";
	}
	cout << endl;


	_bubblesort_(_array_2,_b_float_,5);
    cout << "float: ";
	for(auto i: _array_2){
	    cout << i << " ";
	}

    cout << endl;



    _bubblesort_(_array_3,_b_double_,5);
    cout << "double: ";
	for(auto i: _array_3){
	    cout << i << " ";
	}

	cout << endl;


	_bubblesort_(_array_4,_b_char_,6);
    cout << "char: ";
	for(auto i: _array_4){
	    cout << i << " ";
	}


    return 0;
}