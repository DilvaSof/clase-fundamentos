//realizare un programa que lea un numero, lo multiplique por si mismo y lo muestre.
#include<stdio.h> //aqui llamamos a la libreria stdio.h que se encarga de facilitarnos unos comando como el sprintf y scanf


int main(){ //en esta linea declaramos la funcion principal declarando nuestro inicio de programa
	int x; //en esta linea le decimos a la maquina que nos aparte o que necesitaremos un valor de memoria y de tipo entero.
	printf("Teclea un numero");//en esta linea mandamos a llamar la accion de imprimir los valores dentro de las comillas.
	scanf("%i",&x);//en esta linea mandamos a llamar la accion de lectura, dettalldamente la unidad de control manda la peticion a la unidad de control de entrada y de salida, que a su ves espera una respues del puerto designado al teclado, una vez leido el valor la unidad de entrada y de salida lo envia directamente, a la unidad de control de procesamiento
	x=x*x; //cuando el digito es leido y llega a la unidad de control de procesamiento, la cpu no sabe que hacer con el numero asi que lo manda a la unidad aritmetica logica, pero como tampoco sabe que hacer por que el numero ocupa estar codificado, lo manda a la memoria de instrucciones por bus de instrucciones, la memoria de instrucciones lo codifica y lo envia de vuelta a la unidad aritmetica logica, la cual ya codificado el numero lo multiplica como lo señale y lo envia a la unidad de memoria ram.
	printf("El valor de x es:%i",x);//y con esta accion lo mando a llamar la accion de imprimir y tambien mando a llamar el valor entero x que previamento llego a la unidad de memoria de datos y lo imprime
	return 0;//con esta linea le doy a entender a la computadora que termine el proceso y que me returne el valor de 0 para dar a entender que el programa finalizo con exito.

}	
