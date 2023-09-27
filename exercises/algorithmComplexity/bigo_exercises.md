Ejercicios complejidad algorítmica
Calcule, indicando en cada paso la cantidad de operaciones, la complejidad de los
siguientes algoritmos:
1)
```
j=j-2;
i=j*12;
printf("%d\n",i);
```
O(1)
2)
```
Scanner leer = new Scanner(System. in);
int n = leer.nextInt(), c = 0;
while (n-- > 0)
{
c++;
int res = 0; /**leemos rangos**/
int b = leer.nextInt();
for (int a = 0; i <= b; i++)
if (i % 2 == 1)
res = res + i;
System. out .printf( "Case %d: %d\n" , c, res);
}
```
O(n * b)
3)
```
for (i = 0; i < n; i++)
printf("%d\n",i);
i=0;
while (i<n)
{
printf("%d\n", i);
i++;
}
```
O(n^2)
4)
```
for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++)
        printf("%d\n",i+j);
}
i=0;
while (i<10) {
    // begin B
    j=0;
    while (j<n) {
        printf("%d\n",i+j);
        j++;
    }
    i++;
}
```
O(n^2)

5) Desarrollar un algoritmo para calcular el promedio de un vector de n elementos.
   Calcular luego, su tiempo de ejecución.
```c++
int sum = 0;
for(i = 0; i < n.size(); i++){
    sum += n[i];
}
return sum / n.size()
```
O(n)

7) Desarrollar un algoritmo para calcular el element máximo de un vector y luego
   calcular su tiempo de ejecución.
```c++
int max = 0;
for(i = 0; i < n.size(); i++){
    if (max < n[i]){
        max = n[i]
    }
}
return max
```
O(n)
8) Dadas las clases NodeInt y ListaInt cuyas variables de instancia son las siguientes:
```c++
public class NodeInt{
   int element;
   NodeInt next;
}
public class ListaInt {
   NodeInt primero;
   // ...
   }
```
   Dada una ListaInt, decimos que un par de números (a; b) son contiguos divisibles en la
   lista si a aparece justo antes que b y a es divisible por b. Dada esta definición, se pide
   escribir el método de instancia void separarContiguosDivisibles() de orden lineal, es
   decir, O(n) donde n es la cantidad de elementos de la lista, que por cada par (a; b) de
   contiguos divisibles de la lista, agrega entre ellos el número a/b. 
   
Por ejemplo:
* Si la lista es [20, 10, 6, 3], los pares de contiguos divisibles son (20,10) y (6,3), y por lo  tanto la lista deberá quedar como [20, 2, 10, 6, 2, 3].
* Si la lista es [20, 10, 2, 3], los pares de contiguos divisibles son (20,10) y (10,2), y por lo tanto la lista deberá quedar como [20, 2, 10, 5, 2, 3].
* Si la lista es [7, 6, 2, 7, 6], el único par de contiguos divisibles es (6,2) con lo cual la lista deberá quedar como [7, 6, 3, 2, 7, 6].
* Si la lista es [1, 1], el par (1,1) es de contiguos divisibles y por lo tanto la lista deberá quedar como [1, 1, 1].
* Si la lista es [50, 5], el par (50,5) es de contiguos divisibles y por lo tanto la lista deberá quedar como [50, 10, 5]. Notar que la nueva lista contiene el par de contiguos consecutivos (10,5), sin embargo, este par no se separa por no ser parte de la lista  original.