#include <iostream>
#include <vector>
using namespace std;

class cmd {
public:
    virtual void cooking() = 0;
};
class salat : public cmd {
public:
    void cooking() {
        cout << "Приготовлен салат\n";
    }
};
class pervoe : public cmd {
public:
    void cooking() {
        cout << "Приготовлено первое\n";
    }
};
class vtoroe : public cmd {
public:
    void cooking() {
        cout << "Приготовлено второе\n";
    }
};
class morozjenoe : public cmd {
public:
    void cooking() {
        cout << "Приготовлено мороженое\n";
    }
};
class chai : public cmd {
public:
    void cooking() {
        cout << "Приготовлен чай\n";
    }
};
class desert : public cmd {
public:
    void cooking() {
        cout << "Приготовлен десерт\n";
    }
};

class command {
public:
    cmd *v;
    vector<cmd*> V;
    void add(int x) {
        switch (x) {
        case 1: v = new salat; break;
        case 2: v = new morozjenoe; break;
        case 3: v = new chai; break;
        case 4: v = new pervoe; break;
        case 5: v = new vtoroe; break;
        case 6: v = new desert; break;
        }
        V.push_back(v);
    }
    void execute() {
        for (auto &item : V) item->cooking();
    }
};


int main(){
    setlocale(0, "");
    int x;
    command A;
    do {
        cout << "1 - салат, 2 - мороженое, 3 - чай, 4 - первое, 5 - второе, 6 - десерт, 0 - закончить заказ: ";
        cin >> x;
        if (x == 0) break;
        A.add(x);
    } while (x!=0);
    cout << "\n\n";
    A.execute();

    return 0;
}
