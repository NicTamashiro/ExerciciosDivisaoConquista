Exercícios Práticos - Divisão e Conquista

## ⭐ **Nível Fácil** 

### **Exercício 1: Busca Binária Iterativa**
Implemente o algoritmo de Busca Binária usando iteração ao invés de recursão.

```c
int busca_binaria_iterativa(int arr[], int inicio, int fim, int alvo);
```

**Entrada**: Array ordenado `arr`, índices `inicio` e `fim`, valor `alvo`  
**Saída**: Índice do elemento se encontrado, -1 caso contrário

---

### **Exercício 2: Busca Binária Recursiva**  
Implemente a Busca Binária de forma recursiva. Encontre o primeiro índice de um valor alvo em um array ordenado.

```c
int busca_binaria_recursiva(int arr[], int inicio, int fim, int alvo);
```

**Entrada**: Array ordenado `arr`, índices `inicio` e `fim`, valor `alvo`  
**Saída**: Índice do elemento se encontrado, -1 caso contrário

---

### **Exercício 3: Potência Rápida (Exponenciação Logarítmica)**
Calcule $x^n$ de forma eficiente usando Divisão e Conquista.

**Casos de Recursão**:
- Se $n$ for par: $x^n = (x^{n/2})^2$
- Se $n$ for ímpar: $x^n = x \cdot (x^{(n-1)/2})^2$

```c
long long potencia_rapida(int x, int n);
```

**Entrada**: Base `x`, expoente `n`  
**Saída**: Resultado de $x^n$

---

### **Exercício 4: Encontrar o Mínimo em Subvetor**
Use Divisão e Conquista para encontrar o elemento mínimo em um subvetor.

```c
int encontrar_minimo(int arr[], int inicio, int fim);
```

**Entrada**: Array `arr`, índices `inicio` e `fim`  
**Saída**: Valor do elemento mínimo no subvetor

---

### **Exercício 5: Verificar se o Array está Ordenado**
Use abordagem de Divisão e Conquista para verificar se um array está ordenado.

```c
int esta_ordenado(int arr[], int inicio, int fim);
```

**Entrada**: Array `arr`, índices `inicio` e `fim`  
**Saída**: 1 se ordenado, 0 caso contrário

---

## ⭐⭐ **Nível Médio**

### **Exercício 6: Implementação Completa do Mergesort**
Implemente as duas partes do Mergesort: divisão recursiva e função de mesclagem.

```c
void mergesort(int arr[], int inicio, int fim);
void merge(int arr[], int inicio, int meio, int fim);
```

**Entrada**: Array `arr`, índices `inicio` e `fim`  
**Saída**: Array ordenado (modificação in-place)

---

### **Exercício 7: Implementação Completa do Quicksort (Partição Lomuto)**
Implemente Quicksort usando partição de Lomuto (último elemento como pivô).

```c
void quicksort(int arr[], int inicio, int fim);
int partition_lomuto(int arr[], int inicio, int fim);
```

**Entrada**: Array `arr`, índices `inicio` e `fim`  
**Saída**: Array ordenado (modificação in-place)

---

### **Exercício 8: Contagem de Inversões**
Use modificação do Mergesort para contar inversões em um array.

**Definição**: Inversão é um par $(i, j)$ tal que $i < j$ e $arr[i] > arr[j]$

```c
long long contar_inversoes(int arr[], int inicio, int fim);
```

**Entrada**: Array `arr`, índices `inicio` e `fim`  
**Saída**: Número total de inversões no array

---

## ⭐⭐⭐ **Nível Difícil**

### **Exercício 9: Seleção (Quickselect)**
Encontre o k-ésimo menor elemento em array não ordenado em O(n) no caso médio.

```c
int quickselect(int arr[], int inicio, int fim, int k);
```

**Entrada**: Array `arr`, índices `inicio` e `fim`, posição `k`  
**Saída**: k-ésimo menor elemento do array

---

### **Exercício 10: Soma Máxima de Subvetor Contíguo**
Use Divisão e Conquista para encontrar subvetor contíguo com soma máxima.

**Casos a considerar**:
- Subvetor na metade esquerda
- Subvetor na metade direita  
- Subvetor que atravessa o ponto central

```c
int soma_maxima_subvetor(int arr[], int inicio, int fim);
```

**Entrada**: Array `arr`, índices `inicio` e `fim`  
**Saída**: Soma máxima de subvetor contíguo
