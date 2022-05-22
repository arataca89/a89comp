# a89comp

Utilitário que auxilia a compilar projetos.

```
USO: a89c
```

Como o utilitário funciona:
- O programa abre o arquivo a89comp.files, que deve estar no diretório do projeto, e lê linha por linha.
- Cada linha deve ter um nome de opção do g++ ou um nome de arquivo do projeto (arquivo.cpp).
A última linha deve ter o nome do executável.
- O programa lê o arquivo e monta o comando g++ confome os dados em cada linha.
- Depois o programa executa o comando de compilação.


Exemplo de arquivo ```a89comp.files```:
```
Aluno.cpp
main.cpp
main
```

Exemplo de saída após execução do comando ```a89c```:
```
>>> COMPILADO COM SUCESSO; status: 0 <<<
Comando: g++ Aluno.cpp main.cpp -o main
```

-----------
arataca89@gmail.com

Aulas particulares de programação C/C++.
