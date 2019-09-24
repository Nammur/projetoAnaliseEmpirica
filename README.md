#Análise temporal dos algoritmos de ordenação.
##Projeto Estrutura de Dados Básicas I

##Desenvolvedores: 
    Leonardo Nammur
    Washington Wagner

##Resumo: 
    Esse programa tem como objetivo gerar aquivos para analise do tempo de execução dos algoritmos de ordenação mais conhecidos, através da análise empírica de cada um deles para tamanhos diferentes de elementos a ordenar.
    Para metodos de análise, o vetor inicial tem 6 estados diferentes: ordenado crescentemente, ordenado descrescentemente, 75%, 50%, 25% ou 0% dos elementos em suas posições finais.

##Compilção:
    Para compilar o projeto, digite o comando make no terminal, dentro da pasta src do projeto.

##Execução:
    Para executar o projeto, digite ./consulta no terminal, dentro da pasta src do projeto.
    Primeiramente escolha como quer o vetor inicialmente, depois escolha quais algoritmos deseja testar, apoś isso, escolha quantos tamanhos você quer que o vetor tenha para ordenar (exemplo: se quiser um vetor de tamanho 10 e outro vetor de tamanho 40, digite 2, já que quer 2 tamanhos de vetor.). Feito isso, digite quais são esses tamanhos. Por ultimo, digite quantas vezes você quer rodar o algoritmo para gerar mais dados (se digitar 5, cada algoritmo de ordenação escolhido vai rodar 5 vezes. Cada vez, o vetor inicial sera embaralhado novamente da forma como foi pedida inicialmente(25%, 50%...)).

    Depois de rodar o programa, arquivos .txt serão gerados nas pastas respectivas ao que foi escolhido, dentro da pasta output.
    (exemplo: se foi escolido um vetor 50% ordenado e o selection sort, para tamahos 100 e 1000, dentro da pasta output entre na pasta 50ordenado, depois na pasta do selection e verá 2 novos arqivos: 100.txt e 1000.txt)
    Esses arquivos contém o tempo de execução para cada vez que foi rodado com o tamanho escolhido.
    (se foi escolhido para rodar 5 vezes, o arquivo terá 5 linhas, cada um com o tempo em microssegundos de cada vez que foi rodado).

##EXTRA: 
    Visto a necessidade, foi desenvolvido um programa para importar os arquivos .txt gerados, fazer uma média de todos os valores daquele .txt e guardar em um outro com todas as médias de todos os algoritmos executados.

##Compilação extra:
    Para compilar, digite no terminal, dentro da pasta src, o seguinte comando: g++ -std=c++11 -Wall -I include media.cpp

##Execução extra:
    Para executar, digite no terminal, dentro da pasta src, o seguinte comando: ./a.out

    Essa parte segue os mesmos padrões do program principal.
    Você vai escolher como era o vetor inicialmente, a quantidade de tamanhos que voce quer fazer a media e quais tamanhos são esses. 
    Diferente do principal, você não escolhe de qual algoritmo quer, o prgrama executa para todos os disponiveis automaticamente.

##OBS1: 
    Para o bom funcionamento do programa, não apague as pastas, elas são necessárias para armazenamento dos aquivos
    gerados pelo programa para uma análise posterior.

##OBS2: 
    Os arquivos .txt podem ser apagados sem problema nenhum.

##OBS3: 
    Ao executar o programa, certifique-se de ter salvo os arquivos gerados anteriormente, caso escolha as mesmas opções que escolheu anteriormente.

#OBS4: 
    Na pasta "medias", a organização interna dos .txt se dá por ordem de linhas. 
    linha 1 = média de execução do Insertion Sort;
    linha 2 = média de execução do Selection Sort;
    linha 3 = média de execução do Bubble Sort;
    linha 4 = média de execução do Quick Sort;
    linha 5 = média de execução do Merge Sort;
    linha 6 = média de execução do Shell Sort;
    linha 7 = média de execução do Radix Sort;
    linha 8 = média de execução do Quick Sort com Insertion Sort;

##OBS5: 
    se por opção do cliente, ele tiver rodado apenas alguns algoritmos de ordenação e não todos e não tiver todos os .txt, o txt com as medias não apresentará mais esse formato da
    
##OBS4. 
    Porém o padrão é seguido. Ex: se todos os algoritmos foram rodados, menos o selection, todos que viriam em linhas posteriores a ele sobem uma linha no .txt, fazendo com que o arquivo tenha 7 linhas.

##Para mais informações sobre o estudo realizado, leia o documento em:
    https://docs.google.com/document/d/1vh1bcSHrcBJZvcqFFDA59hDJp-5jxKJGrV9-TK7iqHw/edit?usp=sharing
