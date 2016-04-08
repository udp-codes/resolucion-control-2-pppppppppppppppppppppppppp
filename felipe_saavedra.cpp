//Felipe Saavedra
#include <iostream>

using namespace std;
//1.-
struct setTDA {
    void insert(data x) { }

    data Delete(){ }

    bool isempty() { }
};
struct conjuntoTDA {
    void agrega(data x) {
        setTDA.insert(x);
    }

    void saca() {
        setTDA.Delete();
    }

    bool estavacio() {
        setTDA.isempty();
    }

    bool pertenece(data x) {
        if (setTDA.isempty() == 0)return 0;
        if (head->data == x)return 1;
        if (head->data != x) {
            tda aux = head;
            while (aux->data != x) {
                aux->next;
                if (aux->data == NULL)return 0;
            }
            if (aux->data == x)return 1;
        }
        else return 0;
    }

    conjuntoTDA interseccion(conjunto c) {
        tda aux = head;
        for (int i = 0; i < c.size; i++) {
            if (c[i] == aux)c[i] = c[i] + aux;
            aux = aux->next;
        }
        return c;
    }

    void intersecta(conjunto c) {
        tda aux = head;
        for (int i = 0; i < c.size; i++) {
            if (c[i] == aux)c[i] = c[i] + aux;
            aux = aux->next;
            else delete c[i];
        }
    }

    conjuntoTDA Union(conjunto c) {
        tda aux = head;
        for (int i = 0; i < c.size; i++) {
            c[i] = c[i] + aux;
            aux = aux->next;
        }
        return c;
    }

    void une(conjunto c) {
        tda aux = head;
        c[c.size-1]->next=aux;
    }
};
//2.-
class item {
public:
    string valor;
    int cant_llamados;
};
struct node{
    item el;
    node *next;
    node(){}
    node(item a){
            el=a;
    }
};

class lista {
    node *head;

    lista() {
        head = NULL;
    }

    void agregar(item i) {
        node(i);
        if (head == NULL) {
            node *i = new node;
            head = i;
        }
        if (head != NULL) {
            node *aux = head;
            while (aux->next != NULL) {
                aux = aux->next;
            }
            node *i = new node;
            aux->next = i;
        }
    }

    int probabilidad(string valor) {
        float cont1 = 1.0;
        float cont2 = 0.0;
        node *aux = head;
        if (head->el.valor == valor)cont2++;
        while (aux->next != NULL) {
            if (aux->el.valor == valor)cont2++;
            aux = aux->next;
            cont1++;
        }
        float total = cont2 / cont1;
        total = total * 100;
        return total;
    }

    string llamar_kesino(int k) {
        void ordenar(lista);
        node *aux = head;
        for (int i = 1; i < k; i++) {
            aux = aux->next;
        }
        return aux->el.valor;
    }

    void ordenar(lista) {
        node *aux = head;
        node *aux2 = head;
        while (aux->next != NULL) {
            if (aux->el.valor < aux->next->el.valor) {
                aux = aux->next;
                aux = aux2;
            }
        }
    }
};


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}