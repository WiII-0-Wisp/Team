#include <iostream>
using namespace std;

class salat {
public:
    void cooking() {
        cout << "Приготовлен салат";
    }
};
class pervoe {
public:
    void cooking() {
        cout << "Приготовлено первое";
    }
};
class vtoroe {
public:
    void cooking() {
        cout << "Приготовлено второе";
    }
};
class morozjenoe {
public:
    void cooking() {
        cout << "Приготовлено мороженое";
    }
};
class chai {
public:
    void cooking() {
        cout << "Приготовлен чай";
    }
};
class desert {
public:
    void cooking() {
        cout << "Приготовлен десерт";
    }
};

class command {
public:
    salat a;
    pervoe b;
    vtoroe c;
    morozjenoe d;
    chai e;
    desert f;
    int salat = 0;
    int pervoe = 0;
    int vtoroe = 0;
    int morozjenoe = 0;
    int chai = 0;
    int desert = 0;
    void execute() {
        if (salat > 0) {
            a.cooking();
            cout << " x " << salat << endl;
        }
        if (pervoe > 0) {
            b.cooking();
            cout << " x " << pervoe << endl;
        }
        if (vtoroe > 0) {
            c.cooking();
            cout << " x " << vtoroe << endl;
        }
        if (morozjenoe > 0) {
            d.cooking();
            cout << " x " << morozjenoe << endl;
        }
        if (chai > 0) {
            e.cooking();
            cout << " x " << chai << endl;
        }
        if (desert > 0) {
            f.cooking();
            cout << " x " << desert << endl;
        }
    }
};


int main(){
    setlocale(0, "");
    int x;
    command A;

    do {
        cout << "1 - салат, 2 - мороженое, 3 - чай, 4 - первое, 5 - второе, 6 - десерт, 0 - закончить заказ: ";
        cin >> x;
        switch (x) {
        case 1:
            cout << "Салат принято;\n";
            A.salat++;
            break;
        case 2:
            cout << "Мороженое принято;\n";
            A.morozjenoe++;
            break;
        case 3:
            cout << "Чай принято;\n";
            A.chai++;
            break;
        case 4:
            cout << "Первое принято;\n";
            A.pervoe++;
            break;
        case 5:
            cout << "Второе принято;\n";
            A.vtoroe++;
            break;
        case 6:
            cout << "Десерт принято;\n";
            A.desert++;
            break;
        }
        cout << "\n";
    } while (x!=0);
    cout << "\n\n";
    A.execute();

    return 0;
}
