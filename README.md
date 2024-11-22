# Práticas de Programação em C - IFCE

Este repositório contém as práticas de programação desenvolvidas para a matéria de **Laboratório de Programação** do **IFCE**. O foco principal do repositório é o aprendizado e a implementação de conceitos fundamentais da linguagem **C**, com exercícios e desafios diversos. Abaixo estão descritas as principais seções e desafios do repositório:

## Estrutura do Repositório

O repositório está organizado da seguinte forma:

- **Lista 1**: Exercícios iniciais que abordam os conceitos básicos de programação em C.
- **Lista 2**: Exercícios intermediários, onde são trabalhados conceitos mais avançados e técnicas de manipulação de dados.
- **Desafio: Gerenciamento de Armários**: Um desafio que utiliza operadores bit a bit para gerenciar a ocupação de armários de alunos em uma universidade.

## Desafio: Gerenciamento de Armários

Imagine que você foi contratado para desenvolver um sistema para gerenciar armários de alunos em uma universidade. O objetivo desse desafio é criar uma prova de conceito para controlar a ocupação de **8 armários**. Devido às limitações de memória no dispositivo onde o código será embarcado, a solução deve ser eficiente, utilizando uma **única variável do tipo `char`** (sem sinal) para controlar os armários, de forma que cada bit da variável represente a ocupação de um armário (0 para disponível e 1 para ocupado).

### Requisitos:

- O sistema deve oferecer um **menu interativo** com as opções:
  1. **Ocupar armário**: Alocar um armário para um aluno.
  2. **Liberar armário**: Desocupar um armário.
  3. **Sair**: Finalizar o programa.

- **Operadores bit a bit** devem ser usados para ligar e desligar os bits na variável de controle e monitorar os armários ocupados e livres.

- O sistema deve exibir, em cada rodada, a lista de armários **ocupados** e **disponíveis**.

- O código **não pode usar vetores**. Apenas a manipulação dos bits de uma única variável `char` será utilizada.

- **Geração de números aleatórios**: Para gerar aleatoriedade no processo, o código pode usar a função `rand()` para simular a alocação e desocupação dos armários.

### Exemplo de Funcionamento

Ao rodar o programa, o usuário verá um menu como o seguinte:

```
1. Ocupar armário
2. Liberar armário
3. Sair
Escolha uma opção: 
```

Conforme o usuário interagir com o menu, o sistema atualizará a ocupação dos armários e exibirá quais armários estão **livres** e **ocupados**, manipulando os bits de forma eficiente.
