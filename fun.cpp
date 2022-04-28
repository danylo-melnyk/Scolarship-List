#include "fun.h"

path input_path(){
    path dir_path;
    do{
        cout << "Введіть повний шлях до директорії: ";
        cin >> dir_path;
    } while (!(dir_exists(dir_path)));
    return dir_path;
}
bool dir_exists(const path& p)
{
    if(exists(p))
        return true;
    cout << p << " не є директорією\n";
    return false;
}

