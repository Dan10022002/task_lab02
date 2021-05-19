# Отчёт по lab01

## Report

![report](https://github.com/Dan10022002/task_lab02/blob/master/report11.png)

## Homework

1. Создаём репозиторий task_lab02
2. Создаём и инициализируем папку task_lab02

_cd Dan10022002/workspace/tasks<br/>
mkdir task_timp_lab02<br/>
cd task_timp_lab02<br/>
git init<br/>
git remote add origin https://github.com/Dan10022002/task_lab02.git_

3. Создаём файл hello-world.cpp и комитим его

_touch hello_world.cpp<br/>
vim hellp_world.cpp_
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


