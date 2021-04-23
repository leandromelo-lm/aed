#ifndef ARRANJO_H_INCLUDED
#define ARRANJO_H_INCLUDED
#include <iostream>
using namespace std;

template <class T>
class Arranjo
{
private:
    int tamanho; //tamanho do arranjo
    T * itens; //itens do arranjo
public:
    Arranjo(int tam)
    {
        //instanciar o array de itens com new (pratica 1) e seta tamanho
        itens = new T[tam];
        this->tamanho=tam;
    }

    virtual ~Arranjo()
    {
        //destruir o array de itens (pr�tica 1)
        delete [] itens;
        cout<<"Array deletado"<<endl<<endl;
    }

    virtual T get(int idx)
    {
        //retornar um item do array a partir do �ndice
        return itens[idx];
    }

    virtual void set(int idx, const T & item)
    {
        //set o item do array apontado pelo �ndice usando =
        itens[idx] = item;
    }
    virtual void exibir();
};

template<class T>
void Arranjo<T>::exibir()
{
    //exibir cada item numa linha da forma "<idx>: <item>"
    for(int i=0; i<tamanho; i++)
    {
        cout<<"<"<<i<<">: <"<<itens[i]<<">"<<endl<<endl;
    }
}


#endif // ARRANJO_H_INCLUDED
