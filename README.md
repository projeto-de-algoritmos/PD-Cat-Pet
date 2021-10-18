**!! Atenção: Renomeie o seu repositório para (Tema)_(NomeDoProjeto). !!** 

Temas:
 - Grafos1
 - Grafos2
 - PD
 - D&C
 - Greed
 - Final 
 

# Cat&Pet

**Conteúdo da Disciplina**: PD<br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 17/0142329 | Francisco Emanoel Ferreira da Penha |

## Sobre 
O principal objetivo desse projeto é resolver um problema que surgiu em um problema real que surgiu por causa da pandemia que começou em 2020! O problema é o seguinte, como já foi dito, por conta da pandemia muitas empresas tiveram que ficar fechadas por um tempo, e apenas atualmente que estão voltando a funcionar, claro sempre seguindo as recomendações da OMS, que seria uso de máscara e distanciamento. Depois desse contexto vamos entrar em mais detalhes da aplicação, uma empresa de petshop chamada CAT&PET está voltando a funcionar segundo as recomendações da OMS, para organizar o atendimento foi criado um software para auxiliar nesse serviço, no caso o software pega uma fila de clientes e organizar da melhor maneira, com o maior lucro possível e remarcando as consultas com menor rendimento, seguindo as recomendações da OMS. Vamos exemplificar como que vai funcionar, antes da pandemia as filas eram organizadas da seguinte maneira(Os pets são '0' e 'X' são espaços vazios). **|0|0|0|0|0|**, depois da pandemia as filas devem ser organizadas da seguintes maneira **|0|X|0|X|0|**, sempre com espaços entre cada pets, ou seja, nunca a fila vai estar 100% lotada.


## Screenshots

![](https://raw.githubusercontent.com/projeto-de-algoritmos/PD-PWD/master/images/menu.png)

![](https://raw.githubusercontent.com/projeto-de-algoritmos/PD-PWD/master/images/info-geral.png)

![](https://raw.githubusercontent.com/projeto-de-algoritmos/PD-PWD/master/images/probelma.png)

![](https://raw.githubusercontent.com/projeto-de-algoritmos/PD-PWD/master/images/resposta-final.png)


## Instalação 
**Linguagem**: C++<br>
### Pré-requisitos
- SO: Linux (Ubuntu, Debian,...)
- [g++](https://linuxconfig.org/how-to-install-g-the-c-compiler-on-ubuntu-18-04-bionic-beaver-linux)
- [Makefile](https://zoomadmin.com/HowToInstall/UbuntuPackage/make)



## Uso 

### Passo 1: Executar
 
**Para executar o software:**
 
``make start``
 
**Caso você não tenha o make instalado pode usar os seguintes comandos:**
 
``g++ ./src/posicao_e_preco.cpp -o prog``
 
 
 
``./prog``
 
### Passo 2: Home e informações
 
**Primeiro vai abrir a home para você, logo depois é mostrado algumas informações.**
 
### Passo 3: Entradas
 
**Entrada 1:**  é o tamanho da fila, por exemplo uma entrada de tamanho 5, logo a fila fica mais ou menos assim:
**|0|0|0|0|0|**
(Lembrando que o 'X' é o espaço vazio e o '0' é  pets na fila)
 
**Entrada 2:** Aqui é lido o valor da consulta de cada pet, por exemplo.
 
**|20$|30$|50$|30$|10$|**
 
### Passo 4: Saídas

**Saída 1:** Reorganizada a fila segundo a OMS, vai ser retornado o maior valor possível. No exemplo acima a saída é: **80**, por que esse valor? Reorganizado a fila segundo a OMS a fila fica da seguinte maneira.
 
**|0|x|0|x|0|**, sempre deixando um espaço entre as consultas.
 
**Segunda saída:** aqui mostra quais consultas devem ser escolhidas para obter o maior valor.  No exemplo acima a saída é: **Selecione apenas a(s) consulta(s) 5 3 1**



## Outros 
Quaisquer outras informações sobre seu projeto podem ser descritas abaixo.




