# Отчёт по lab02

## Report

![report](https://github.com/Dan10022002/task_lab02/blob/master/report11.png)

## Homework

### Part I

1. Создаём репозиторий task_lab02
2. Создаём и инициализируем папку task_lab02

_cd Dan10022002/workspace/tasks<br/>
mkdir task_timp_lab02<br/>
cd task_timp_lab02<br/>
git init<br/>
git remote add origin https://github.com/Dan10022002/task_lab02.git_

3. Создаём файл hello-world.cpp и комитим его

_touch hello_world.cpp<br/>
vim hello_world.cpp_
```sh
#include <iostream>
  
using namespace std;
  
int main() {
cout << "Hello, world!" << endl;
return 0;
}
```

_git add .<br/>
git commit -m "First commit"<br/>
vim hello_world.cpp_
```sh
 #include <iostream>
 #include <string>
 
 using namespace std;
 
 int main() {
 string name;
 cin >> name;
 cout << "Hello world from " << name << endl;
 return 0;
 }
 ```
 
 4. Повторно добавлять файл не нужно, так как гит уже "следит" за файлом *hello_world.cpp*
 
 _git commit -m "Change program hello_world.cpp"<br/>
 git push origin master<br/>
 git log_

### Part II

_git branch patch1<br/>
git checkout patch1<br/>
vim hello_world.cpp_

```sh
#include <iostream>
#include <string>

int main() {
std::string name;
std::getline(std::cin, name);
std::cout << "Hello world from " << name << std::endl;
return 0;
}
```

_git add .<br/>
git commit -m "Create new branch and chande code"<br/>
git push origin patch1<br/>
vim hello_world.cpp_

```sh
std::getline(std::cin, name); //Ввод строки с пробелами
```

_git commit -m "Added comment"<br/>
git push origin patch1_

1. Появились изменения в PR
2. Производим слияние и удаляем ветку

![pull](https://github.com/Dan10022002/task_lab02/blob/master/pull.png)

### Part III

_git branch patch2<br/>
git checkout patch2<br/>
clang-format --style=Mozilla hello_world.cpp<br/>
git commit -m "Commit for rebase"_

1. Был создан PR parch2 -> master В ветке master в коде перевел комментарий
2. В PR появились конфликты

_git pull origin master<br/>
git rebase master_

В терминале появились конфликты и для их исправления использовал vim Полсе всех исправления снова выполнил rebase

_git rebase master<br/>
git push -f origin patch2_

3. В PR пропали конфликты
4. Завершил мерж patch2 -> master
