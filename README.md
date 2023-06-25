<div align="center">
	<h1> libft </h1>
	<p>Tu primera librería</p>
	<br />
	<img src="https://img.shields.io/badge/norme-OK-success?style=flat"/>
	<img src="https://img.shields.io/badge/leaks-CLEAR-success?style=flat"/>
	<img src="https://img.shields.io/badge/bonus-done-success?style=flat"/>
	<img src="https://img.shields.io/badge/-125%2F100-success?style=flat&logo=42&logoColor=000" />
</div>

<h2 align="center">📜 PROYECT DESCRIPTION 📜</h2>

Este es tu primer proyecto como estudiante de 42. Deberás programar algunas funciones de la librería estándar de C, así como otras funciones que te serán útiles a lo largo de todo tu cursus.

<h2 align="center">🌲 PROYECT TREE 🌲</h2>

```
.
├── Makefile
├── README.md
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
├── ft_itoa.c
├── ft_lstadd_back_bonus.c
├── ft_lstadd_front_bonus.c
├── ft_lstclear_bonus.c
├── ft_lstdelone_bonus.c
├── ft_lstiter_bonus.c
├── ft_lstlast_bonus.c
├── ft_lstmap_bonus.c
├── ft_lstnew_bonus.c
├── ft_lstsize_bonus.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_putchar_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_putstr_fd.c
├── ft_split.c
├── ft_strchr.c
├── ft_strdup.c
├── ft_striteri.c
├── ft_strjoin.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strmapi.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_strtrim.c
├── ft_substr.c
├── ft_tolower.c
├── ft_toupper.c
└── libft.h

```

<h2 align="center">⚙️ PROYECT GENERAL PROCEDURE ⚙️</h2>
## INDEX

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## **isalpha**

- CÓDIGO
    
    ```c
    int ft_isalpha(int c)
    {
        if ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
            return (c);
        return (0);
    }
    ```
    

esta función consiste en enviarle un entero y que esta devuelva un valor positivo si el valor en la tabla ASCII corresponde a un carácter alfabético o que devuelva 0 si se trata de lo contrario. 

En este caso si se trata de un carácter alfabético la función devuelve su valor ASCII (que sabemos que va a ser distinto de 0)

## **isdigit**

- CÓDIGO
    
    ```c
    int ft_isdigit(int c)
    {
        if (c >= '0' && c <= '9')
            return (c);
        return (0);
    }
    ```
    

Esta función consiste en enviarle un entero y que esta devuelva un valor positivo si el valor en la tabla ASCII corresponde a un dígito o que devuelva 0 si se trata de lo contrario. 

En este caso si se trata de un dígito la función devuelve su valor ASCII (que sabemos que va a ser distinto de 0)

## **isalnum**

- CÓDIGO
    
    ```c
    int ft_isalnum(int c)
    {
        if(ft_isalpha(c) || ft_isdigit(c))
            return(c);
        return (0);
    }
    ```
    

Esta función consiste en enviarle un entero y que esta devuelva un valor positivo si corresponde a un carácter alfanumérico en la tabla ASCII o que devuelva 0 si se trata de lo contrario. 

Al estar trabajando bajo una misma librería, simplemente hacemos si se cumple alguna de las dos funciones creadas previamente, en caso afirmativo devuelve su valor ASCII.

## **isascii**

- CÓDIGO
    
    ```c
    int ft_isascii(int c)
    {
        if(c >= 0 && c <= 127)
            return (1);
        return (0);
    }
    ```
    

Esta función nos pide que comprobemos si el entero que hemos recibido es un valor de la tabla ASCII, por tanto simplemente pondremos los límites de todo ASCII.

## **isprint**

- CÓDIGO
    
    ```c
    int ft_isprint(int c)
    {
        if(c >= 32 && c < 127)
            return (c);
        return (0);
    }
    ```
    

En este caso se nos pide que la función se reduzca a los valores imprimibles de ASCII, que van del 32 al 126.

## **strlen**

Se nos pide que recreemos la función strlen, hecha durante [la piscina](https://www.notion.so/PISCINA-42-fd758fb6eaf54e1e92ea8875e91fd6fb?pvs=21).

## **memset**

- CÓDIGO
    
    ```c
    void	*ft_memset(void *b, int c, size_t len)
    {
    	size_t			counter;
    	unsigned char	*ptr;
    
    	counter = 0;
    	ptr = (unsigned char *)b;
    	while (counter < len)
    	{
    		ptr[counter] = (unsigned char)c;
    		counter++;
    	}
    	return (b);
    }
    ```
    

La función memset sirve para asignar un valor específico a todas las localizaciones de un bloque de memoria. En esta función el `b` hace referencia a un puntero al comienzo de este bloque de memoria, el `c` es el valor que se quiere asignar a cada byte y el `len` es el número de bytes del bloque de memoria que queremos inicializar. 

Para hacer este ejercicio es importante saber cómo funciona y que es [size_t](https://www.notion.so/Las-funciones-de-gesti-n-din-mica-c48bba8026f7494bb7f94a0a10bb0702?pvs=21).

1. El primer paso es declarar variables, declaramos un dato de tipo size_t al que llamamos counter y que usaremos como una forma de contar cuantas localizaciones de memoria llevamos cambiadas y un puntero a un unsigned char al que llamamos ptr. 
2. Después de esto las inicializamos, `counter = 0` y `ptr = (unsigned char *)b` , esta ultima se encarga de guardar la posición de memoria a la que está apuntando b cambiando su valor por un puntero a unsigned char, que es con lo que estamos trabajando. Necesitamos hacer esto dado que en la siguiente parte del código vamos a introducir datos en esa posición de memoria y no podemos hacerlo si trabajamos unicamente con `b` , esto es así porque `b` realmente es un puntero que apunta al vacío y si tratasemos de modificarlo daría error
3. A continuación simplemente inicializamos un bucle while que se encarga de introducir en los bloques de memoria el valor unsigned char al que pertenece c (`(unsigned char)c` es una forma de “modificar” de manera temporal el tipo de variable de c de forma que lo que introducimos en el bloque de memoria no es un entero si no un carácter) ademas a petición de la propia función enviamos el primer argumento de la función (`return(b);`).

## **bzero**

- CÓDIGO
    
    ```c
    void ft_bzero(void *s, size_t n)
    {
    	size_t			counter;
    	unsigned char	*ptr;
    
    	counter = 0;
    	ptr = (unsigned char *)s;
    	if(n == 0)
    		return;
    	while(counter < n)
    	{
    		ptr[counter] = '\0';
    		counter++;
    	}
    }
    ```
    

Esta función es una simple modificación de la función memset, se requiere que la función haga lo mismo pero en vez de inicializarlo a un valor enviado por argumentos se hace con el carácter \0, otra modificación es que esta no devuelve nada.

## **memcpy**

- CÓDIGO
    
    ```c
    void	*ft_memcpy(void *dst, const void *src, size_t n)
    {
    	size_t		cont;
    	char		*ptr_dest;
    	const char	*ptr_src;
    
    	if (!src && !dst)
    		return (0);
    	ptr_dest = (char *)dst;
    	ptr_src = (const char *)src;
    	cont = 0;
    	while (cont < n)
    	{
    		ptr_dest[cont] = (const char)ptr_src[cont];
    		cont++;
    	}
    	return (dst);
    }
    ```
    

La función memcpy se utiliza para copiar un bloque de memoria de longitud n de una ubicación a otra. El propio manual indica que la función memcpy no está preparada para gestionar overflows o acoplamiento de memoria.

En primer, después de crear las variables, lugar protegeremos la función para que esta solo se ejecute si los argumentos que nos han enviado son correctos, después de esto asociaremos los argumentos `dest` y `src` a unos punteros ya definidos en nuestra función para poder trabajar con ellos (ya sabemos que no podemos trabajar con punteros genéricos o `void *` ). A continuación solo nos queda, mediante un bucle while, pasar todos los datos desde el puntero creado a source hasta el puntero creado a destino. 

Como veis, en el bucle estamos poniendo como condición `cont < n` , es importante entender que, aunque de primeras pueda parecer que lo lógico es ponerlo como ≤=, esto no serviría, ya que `n` habla de cantidad y por tanto empieza a contar en 1 y la variable `cont` trabaja con posición y por tanto empieza en 0.

## **memmove**

- CÓDIGO
    
    ```c
    void	*ft_memmove(void *dst, const void *src, size_t len)
    {
    	char	*ptr_dest;
    	char	*ptr_src;
    	size_t	i;
    
    	if (src == NULL && dst == NULL)
    		return (0);
    	i = 0;
    	ptr_dest = (char *)dst;
    	ptr_src = (char *)src;
    	if (ptr_dest > ptr_src)
    	{
    		while (len-- != 0)
    			ptr_dest[len] = ptr_src[len];
    	}
    	else
    	{
    		while (i < len)
    		{
    			ptr_dest[i] = ptr_src[i];
    			i++;
    		}
    	}
    	return (dst);
    }
    ```
    

Es muy similar a memcpy, en el sentido de que hace los mismo, pero esta sí tiene en consideración el hecho de evitar acoplamientos de memoria de forma que tiene que gestionarlo.

Las primeras líneas son iguales, se definen las variables a usar, se comprueba que los argumentos enviados sean válidos y se igualan los punteros creados a los argumentos para poder trabajar con estos.

Después de esto hay que crear un if, este condicional nos enseña cómo, dependiendo de si la dirección de memoria del destino se encuentra antes o después de la dirección de memoria del source, el programa se ejecutará de una forma u otra para asegurarse de que no se produzca este acoplamiento.

1. if `ptr_dest > ptr_src` quiere decir que si la dirección de destino está por encima, en este caso el programa ejecutará la copia desde src hasta dest pero lo hará en sentido inverso, así se asegura de que no haya problema. Para hacer esto se trabaja directamente con len, que apunta al final del string, y se ira reduciendo hasta llegar a 0.
2. else, es decir, if `ptr_dest < ptr_src` , el programa ejecuta el bucle while normal y corriente.

## **strlcpy**

- CÓDIGO
    
    ```c
    size_t	ft_strlcpy(char *dest, char const*src, size_t size)
    {
    	size_t	i;
    	size_t	res;
    
    	i = 0;
    	res = 0;
    	while (src[res])
    		res++;
    	if (size > 0)
    	{
    		while (src[i] && i < (size - 1))
    		{
    			dest[i] = src[i];
    			i++;
    		}
    		dest[i] = '\0';
    	}
    	return (res);
    }
    ```
    

En si la función es igual que la que hicimos durante la piscina, pero teniendo en cuenta que tenemos que el prototipo de la función debe ser el mismo que el del manual

## **strlcat**

- CÓDIGO
    
    ```c
    size_t	ft_strlcat(char *dest, char const*src, size_t size)
    {
    	size_t	a;
    	size_t	b;
    	size_t	result;
    
    	a = 0;
    	b = 0;
    	result = 0;
    	while (dest[a] != '\0')
    		a++;
    	while (src[result] != '\0')
    		result++;
    	if (size <= a)
    		result += size;
    	else
    		result += a;
    	while (src[b] != '\0' && (a + 1) < size)
    	{
    		dest[a] = src[b];
    		a++;
    		b++;
    	}
    	dest[a] = '\0';
    	return (result);
    }
    ```
    

Igual que el anterior, ya hecho en la piscina pero con otro prototipo de función

## **toupper**

- CÓDIGO
    
    ```c
    int	ft_toupper(int c)
    {
    	if (c >= 'a' && c <= 'z')
    		return (c - 32);
    	return (c);
    }
    ```
    

Pues eso, pasa el carácter de minúscula a mayúscula

## **tolower**

- CÓDIGO
    
    ```c
    int	ft_tolower(int c)
    {
    	if (c >= 'A' && c <= 'Z')
    		return (c + 32);
    	return (c);
    }
    ```
    

La de antes a la inversa basicamente

## **strchr**

- CÓDIGO
    
    ```c
    char	*ft_strchr(const char *str, int a)
    {
    	if ((!*str && (char) a == '\0'))
    		return ((char *) str);
    	while (*str != '\0')
    	{
    		if (*str == (char) a)
    			return ((char *) str);
    		str++;
    	}
    	if (a == '\0' || a == 1024)
    		return ((char *)str);
    	return (0);
    }
    ```
    

La función strchr lo que hace es recoger por argumentos la dirección de memoria en la que empieza un string y el valor int de un carácter. La función tiene buscar conforme avanza en el string el caracter a y devolver la dirección de memoria donde lo haya encontrado.

Este ejercicio no tiene especial complicación, Lo primero que hacemos es comprobar que, en caso de que la dirección de memoria que nos han mandado es `\0` y ese es el carácter enviado (porque sí, nos pueden pedir buscar \0 y sí, el ultimo valor también tenemos que tenerlo en cuenta) se envía directamente la dirección de memoria que hemos recibido en argumentos. Después de esto simplemente avanzamos en str con un bucle while y ponemos una condición dentro de este que diga que en caso de encontrar el caracter a, devuelva la posición de memoria de este.

Una vez hemos salido de str, significa que estamos apuntando ya a `\0`, es importante saber que la función no termina ahí, si no que tenemos que añadir un último condicional en el que en caso de que el carácter buscado fuese `\0` debemos devolver ese valor. Añadimos también el 1024 sinceramente no se porqué pero paco me daba fallo si no (no recuerdo si en modo normal o strict pero bueno por si acaso)

## **strrchr**

- CÓDIGO
    
    ```c
    char	*ft_strchr(const char *str, int a)
    {
    	if ((!*str && (char) a == '\0'))
    		return ((char *) str);
    	while (*str != '\0')
    	{
    		if (*str == (char) a)
    			return ((char *) str);
    		str++;
    	}
    	if (a == '\0' || a == 1024)
    		return ((char *)str);
    	return (0);
    }
    ```
    

Funciona igual que strchr pero nos indica la posición de la última posición del carácter que nos piden, o lo que es lo mismo, el primero desde el final. 

## **strncmp**

- CÓDIGO
    
    ```c
    int	ft_strncmp(const char *s1, const char *s2, size_t n)
    {
    	size_t	i;
    
    	i = 0;
    	while ((s1[i] || s2[i]) && i < n)
    	{
    		if (s1[i] != s2[i])
    			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
    		i++;
    	}
    	return (0);
    }
    ```
    

Igual que el de la piscina pero con `const char *` , no tiene mucho más.

## **memchr**

- CÓDIGO
    
    ```c
    void	*ft_memchr(const void *s, int c, size_t n)
    {
    	size_t			i;
    	unsigned char	*ptr;
    
    	i = 0;
    	ptr = (unsigned char *)s;
    	while (i < n)
    	{
    		if (ptr[i] == (unsigned char)c)
    			return (&ptr[i]);
    		i++;
    	}
    	return (0);
    }
    ```
    

Básicamente igual que strchr pero es hasta `n` caracteres y recibiendo punteros de tipo `void *` , por ello trabajamos casteando el puntero recibido en una variable que creamos nosotros con la que podemos trabajar (en mi caso es `ptr`). No tenemos que tener en cuenta el `\0` y el `1024` porque estamos trabajando con memoria genérica, que no siempre va a ser char.

## **memcmp**

- CÓDIGO
    
    ```c
    int	ft_memcmp(const void *s1, const void *s2, size_t n)
    {
    	unsigned char	*ptr_s1;
    	unsigned char	*ptr_s2;
    	size_t			a;
    
    	a = 0;
    	ptr_s1 = (unsigned char *)s1;
    	ptr_s2 = (unsigned char *)s2;
    	while (a < n)
    	{
    		if (ptr_s1[a] != ptr_s2[a])
    			return (ptr_s1[a] - ptr_s2[a]);
    		a++;
    	}
    	return (0);
    }
    ```
    

La función memcmp se usa para comparar dos bloques de memoria y devolver la diferencia si la hay. Ya hicimos uno similar que era el strncmp.

Como todos los ejercicios donde trabajamos con bloques de memoria, el primer paso es castear estos bloques en una variable que definamos nosotros con la que podamos trabajar. Despues de definir las variables y castar los argumentos en estas, comenzamos la comparación. Esta la hacemos de forma que mientras llevemos menos posiciones de las que nos piden, sigue avanzando salvo en el caso donde difieran los valores de los bloques de memoria, en ese caso se devuelve la diferencia.

## **strnstr**

- CÓDIGO
    
    ```c
    char	*ft_strnstr(const char *str, const char *to_find, size_t len)
    {
    	int	i;
    	int	j;
    
    	if (to_find[0] == '\0' || (len == 0 && !str))
    		return ((char *)str);
    	i = 0;
    	while (str[i] != '\0' && (size_t)i < len)
    	{
    		j = 0;
    		while (to_find[j] != '\0' && (size_t)i + j < len)
    		{
    			if (str[i + j] == to_find[j])
    			{
    				j++;
    			}
    			else
    				break ;
    		}
    		if (to_find[j] == '\0')
    		{
    			return ((char *)str + i);
    		}
    		i++;
    	}
    	return (0);
    }
    ```
    

Es una adaptación de la función strstr de la piscina. 

Si no me equivoco realmente la única modificación que tiene con esta es que nos envian un len que es el máximo de caracteres donde queremos buscarla. 

<aside>
💡 Es importante tener en cuenta el len tanto en el bucle principal como en el bucle que creamos una vez encontremos una primera igualdad, ya que en esta parte entramos en un segundo bucle donde dejamos de tener en cuenta la condición del primero, con lo que tenemos que añadirlo también ahí.

</aside>

## **atoi**

- CÓDIGO
    
    ```c
    int	ft_atoi(const char *str)
    {
    	int	i;
    	int	sn;
    	int	num;
    
    	i = 0;
    	sn = 1;
    	num = 0;
    	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
    		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
    		i++;
    	if (str[i] == '-')
    		sn *= -1;
    	if (str[i] == '+' || str[i] == '-')
    		i++;
    	while (str[i] >= '0' && str[i] <= '9')
    	{
    		num = (str[i] - 48) + (num * 10);
    		i++;
    	}
    	num *= sn;
    	return (num);
    }
    ```
    

Versión del atoi que había en los examenes, replicamos la función del manual. Realmente según me han dicho al corregirme la parte de los espacios y saltos no es necesaria ya que la función atoi no maneja eso, pero bueno yo la deje puesta. No hay mucho más que explicar es el atoi de la piscina pero simplificado.

<aside>
💡 Antes de pasar a las siguientes funciones, es importante entender cómo funciona malloc y la memoria dinamica.

</aside>

## **calloc**

- CÓDIGO
    
    ```c
    void	*ft_calloc(size_t num, size_t size)
    {
    	char		*ptr;
    	size_t		i;
    
    	ptr = (char *)malloc(size * num);
    	if (!ptr)
    		return (0);
    	i = 0;
    	while (i < (num * size))
    	{
    		ptr[i] = '\0';
    		i++;
    	}
    	return (ptr);
    }
    ```
    

Si habeis leido la hoja de malloc habreis visto que calloc está explicado ahí dado que es una función muy típica y la expliqué ahí pero bueno se ve que hay que recrearla. El funcionamiento de calloc es muy simple, se le envía el número de caracteres que queremos asignar y el tamaño de cada bloque de memoria. Definiremos una variable que usaremos de contador para las iteraciones `i` y un puntero a caracter `ptr` donde vamos a guardar las cosas, después de esto reservamos la memoria con malloc en `ptr`, comprobamos si la asignación se ha hecho correctamente (esto hay que hacerlo siempre que se haga malloc) y por ultimo haremos un bucle que vaya rellenando de `\0` tantas veces como nos han pedido. 

## **strdup**

- CÓDIGO
    
    ```c
    char	*ft_strdup(const char *s1)
    {
    	char	*s2;
    	size_t	i;
    
    	i = 0;
    	s2 = malloc((ft_strlen(s1)+1) * sizeof(char));
    	if (s2 == NULL)
    		return (0);
    	while (i <= (size_t)(ft_strlen(s1)))
    	{
    		s2[i] = s1[i];
    		i++;
    	}
    	return (s2);
    }
    ```
    

La función strdup duplica una cadena de caracteres recibida como argumento en otra definida en la propia función, para la cual nos piden que alojemos memoria. El funcionamiento es el siguiente: Primero definimos las variables a usar, después alojamos memoria en el string creado mediante malloc (con su respectiva comprobación). Después en el bucle le vamos asignando todo. Es un poco como calloc pero en vez de `\0` le asignamos el respectivo valor de s1 y con la necesidad de calcular antes cuando mide s1 para saber las iteraciones que tiene que dar el bucle y la cantidad de memoria que vamos a necesitar.

# FUNCIONES ADICIONALES

## **substr**

- CÓDIGO
    
    ```c
    char	*ft_substr(char const *s, unsigned int start, size_t len)
    {
    	char	*s_copy;
    	size_t	i;
    
    	i = 0;
    	if (!s)
    		return (0);
    	if ((size_t)ft_strlen(s) < start)
    		return (ft_strdup(""));
    	if ((size_t)ft_strlen(s) < start + len)
    		len = ft_strlen(s) - start;
    	s_copy = malloc((len + 1) * sizeof(char));
    	if (s_copy == NULL)
    		return (0);
    	ft_memcpy(s_copy, s + start, len);
    	s_copy[len] = '\0';
    	return (s_copy);
    }
    ```
    

Esta es la primera de las funciones adicionales, las funciones adicionales no existen realmente en la librería estándar de C, si no que son funciones creadas con tal de facilitarnos los próximos proyectos. Substr devuelve un substring del string argumento `s` que va desde `start` hasta, como máximo, `len` . 

<aside>
💡 Como máximo quiere decir que no siempre va a ocupar len caracteres, si no que depende de los valores que nos envíen. Imaginad que el string que nos han enviado es “patata” y el len que nos envían es 4. Si start fuese por ejemplo 2, devolveríamos 4 caracteres desde el segundo, es decir “atat” no habría ningún problema ya que el len cabe dentro de s. Ahora pongámonos en el caso de que start ha sido 5, en esta caso no podemos devolver los 4 caracteres de len, si no que devolveremos “ta” que es todo lo que podíamos.

</aside>

Una vez entendido esto, podemos pasar ya a entender como se aplica este procesamiento en el código. Después de definir las variables y comprobar que `s` no está vacio, vamos a trabajar con el `len` para adecuarlo a el tamaño real que vamos a enviar.  Para esto hay tres casos que pueden suceder:

1. El valor de start que nos han enviado es mayor que la cantidad de caracteres de `s` , en este caso les enviamos un string vacío, pero como nos piden que sea un string donde alojemos memoria, lo enviaremos a strdup.
2. Nos piden que copiemos más de los que podemos copiar, esto lo comprobamos sabiendo que `start + len` corresponde a la posición de `s` donde vamos a terminar de copiar, si esta posición es mayor que la cantidad de caracteres de `s` significa que con el `len` enviado nos estariamos pasando, por lo que hay que reajustarlo. Para reajustar el `len` le daremos como tamaño la longitud del string `s` menos la posición desde la que comenzamos a copiar, de esta forma copiaremos hasta el final del string unicamente.
3. Aunque esta no esta puesta (por motivos evidentes), en caso de que `start + len` sea menor o igual que `ft_strlen(s)` se entiende que podemos copiar el `len` enviado y por tanto no habria que modificarlo.

despues de estas comprobaciones alojamos la memoria y comprobamos que no haya fallos y enviamos a memcpy para que copie en `s_copy` (o como se llame el puntero a char que habeis creado para guardar el substring), enviamos también `s + start` (la posición de memoria desde la que vamos a empezar a copiar) y `len` , la cantidad a copiar. despues añadimos el `\0` y lo devolvemos.

## strjoin

- CÓDIGO
    
    ```c
    char	*ft_strjoin(char const *s1, char const *s2)
    {
    	char	*ret_str;
    	size_t	len;
    	int		i;
    	int		a;
    
    	i = 0;
    	a = 0;
    	len = ((size_t)ft_strlen(s1) + (size_t)ft_strlen(s2));
    	ret_str = (char *)malloc(((len + 1) * sizeof(char)));
    	if (!ret_str)
    		return (NULL);
    	while (s1[i])
    	{
    		ret_str[i] = s1[i];
    		i++;
    	}
    	while (s2[a])
    	{
    		ret_str[i + a] = s2[a];
    		a++;
    	}
    	ret_str[i + a] = '\0';
    	return (ret_str);
    }
    ```
    

strjoin concatena dos strings `s1` y `s2` en un tercer string para el que se aloja memoria. Es una modificación del strcat. se asocia la memoria dando como tamaño un `len` donde se ha guardado el `strlen` de cada string recibido y luego se hacen dos bucles con cada string para copiarlos en el que vamos a devolver.

## **strtrim**

```c

```

## **split**

- CÓDIGO
    
    está por abajo que es muy largo y esta dividido en cosas
    

La función split debe alojar y devolver una tabla de strings (todos ellos terminados en \0 y la tabla terminada en \0 también. Esta tabla es el resultado de dividir el string `s` por el caracter dado `c` 

Por ejemplo, la función `ft_split(”hola**compañeros*que**tal**”, ‘*’)` devolverá una tabla [”hola”, “compañeros”, “que”, “tal”] 

```c
static int	ft_cntwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	ft_free(char **str, int str_ind)
{
	while (str_ind-- > 0)
		free(str[str_ind]);
	free(str);
}

static int	ft_wordlen(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		str_ind;

	i = 0;
	str_ind = -1;
	str = malloc(sizeof(char *) * (ft_cntwords (s, c) + 1));
	if (!str)
		return (0);
	while (++str_ind < ft_cntwords (s, c))
	{
		while (s[i] == c)
			i++;
		str[str_ind] = ft_substr(s, i, ft_wordlen(s, c, i));
		if (!(str[str_ind]))
		{
			ft_free(str, str_ind);
			return (0);
		}
		i += ft_wordlen(s, c, i);
	}
	str[str_ind] = 0;
	return (str);
}
```

Este es sinceramente un tremendo coñazo para explicarlo asique voy a separar todo por funciones empezando por las pequeñas y por ultimo la principal.

1. cntwords

la función cntwords se encarga de calcular en cuantas palabras se va a separar el string, para ello recibe como argumentos el propio string y el caracter separador. Se crea un primer bucle que va recorriendo el string principal, dentro de este si encontramos un caracter que no coincida con el separador aumentamos una vez la variable que hayamos declarado para contar y pasamos todas las letras no separadores que tenga esa palabra, en caso de no encontrar caracteres no separadores, hacemos q avance en los separadores, con esto controlamos que si hay más de un separador juntos los ignore todos.

1. wordlen (efectivamente se que me he saltado una, ahora la explico)

wordlen sirve para contar cuanto va a medir cada palabra, para esto le enviamos la posición de memoria donde empieza `s` ,   el carácter separador `c` y el carácter `i` desde el que tiene que empezar a contar.

La función avanza mientras no encuentre un separador y mientras el string siga existiendo, cuando alguna de las dos se acaba devuelve la cuenta de caracteres.

1. ft_free

es una modificación de la función free original de stdlib, esta función solo se usa cada vez que alojemos la memoria para una palabra y esta falle. Lo que hace es que recibe un puntero a el `str` bidimensional donde estamos trabajando y recibe una variable de ft_split que indica por que palabra vamos, cuando entramos a esta función, esta empieza a liberar memoria tanto de esta palabra como de todas las palabras que hemos creado anteriormente, por ultimo libera la memoria principal. 

1. split

vamos ahora con la función principal, el primer paso es declarar las variables que vamos a usar y alojar con malloc memoria, vamos a ver en un ejemplo con la frase que usamos al principio como sería la tabla que queremos crear. `ft_split(”hola**compañeros*que**tal**”, ‘*’)`

| str_ind | 0 | 1 | 2 | 3 | 4 | … | 10 |
| --- | --- | --- | --- | --- | --- | --- | --- |
| str[0][] | h | o | l | a | \0 |  |  |
| str[1][] | c | o | m | p | a | … | \0 |
| str[2][] | q | u | e | \0 |  |  |  |
| str[3][] | t | a | l | \0 |  |  |  |
| str[4][] | \0 |  |  |  |  |  |  |

Aqui se entiende mejor lo que deciamos de que cada fila de la tabla termina en `\0` y que a su vez la tabla en si misma termina con una fila que tiene unicamente un `\0` , con esto se entiende que el tamaño de memoria que alojamos es `((ft_cntwords(s, c) + 1) * sizeof(char *))` 

<aside>
💡 estamos multiplicando por `sizeof(char *)` porque indicamos que los que se esta guardando en primera instancia en la tabla principal es las direcciones de memoria de los punteros donde luego vamos a almacenar cada palabra.

</aside>

vamos ahora con el bucle, empezamos como suele ser común con un bucle que recorra nuestro string principal `s` hasta el final, dentro de este lo primero que nos encontramos es un bucle que pase todos los caracteres separadores que vaya encontrando. Aquí entra en acción la variable `i` , que estamos usando para indicar por que parte del string original vamos, salimos del bucle de los separadores, con lo que sabemos que la `i` está marcando el comienzo de una palabra. El siguiente paso consiste en indicar que en nuestro `str` y en concreto en su posición `str_ind` vamos a añadir una dirección de memoria, esta dirección de memoria es donde comienza la proxima palabra. Para guardar la palabra enviamos a `ft_substr` el string original `s`, la posicion por donde empezamos `i` y lo que va a medir la palabra, para esto hacemos uso de `ft_wordlen` donde vamos a enviar `(s, c, i)` de forma que indicamos el string principal `s` y que busque desde`i` hasta que haya una `c`.  

Una vez guardada la palabra por la que vayamos tenemos que verificar si ha ido bien, y en caso de fallo llamaremos a `ft_free` y finalizaremos el programa. En caso de que haya funcionado, aumentamos `i` lo que haya medido la palabra que hemos metido y empezamos desde ahi a buscar la siguiente palabra. Por ultimo, una vez terminado todo el string, añadimos la linea de `str` que tiene unicamente un `\0` y enviamos la tabla.

## **itoa**

- CÓDIGO
    
    ```c
    static int	ft_dcount(long int n)
    {
    	int	i;
    
    	i = 0;
    	while (n >= 10)
    	{
    		i++;
    		n /= 10;
    	}
    	return (i + 1);
    }
    
    char	*ft_itoa(int n)
    {
    	char			*str;
    	long int	n_copy;
    	int				n_len;
    
    	n_copy = n;
    	if (n_copy < 0)
    		n_copy *= -1;
    	n_len = ft_dcount(n_copy);
    	if (n < 0)
    		n_len++;
    	str = malloc((n_len + 1) * sizeof(char));
    	if (!str)
    		return (NULL);
    	str[n_len--] = '\0';
    	while (n_len >= 0)
    	{
    		str[n_len--] = (n_copy % 10) + '0';
    		n_copy /= 10;
    	}
    	if (n < 0)
    		str[0] = '-';
    	return (str);
    }
    ```
    

La función itoa es la versión opuesta del atoi. Recibe un entero y devuelve ese numero en ascii. Para este ejercicio el primer paso es crear un `long int` donde haremos una copia del numero y en la que basicamente trabajaremos casi todo. Una vez hecha la copia la igualamos a `n` y , en caso de que sea negativo, lo pasamos a positivo. despues de esto usamos dcount para contar cuantos dígitos tiene el número y, por tanto, cuanta memoria tenemos que reservar. Antes de hacer el malloc nos aseguramos de que, si el `n` original es negativo, `n_len` será incrementado en uno, esto es para poder añadir el símbolo negativo. Hacemos malloc y comprobamos que haya ido bien y, después de esto, rellenamos el `str` de atrás para adelante. Lo primero que hacemos es poner el `\0` y luego vamos rellenando del resultado de sumarle `'0'` al resto de dividir la copia del número por 10, esto lo hacemos bajando cada vez una unidad el `n_len` hasta que lleguemos a 0 dígitos. Por ultimo en caso de que `n < 0` , como hemos reservado un hueco de memoria más, tenemos que añadir `'-'` al `str[0]` y devolver `str` .

## **strmapi**

- CÓDIGO
    
    ```c
    char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
    {
    	int		a;
    	char	*str;
    
    	if (!s || !f)
    		return (0);
    	a = ft_strlen(s);
    	str = malloc((a + 1) * sizeof(char));
    	if (!str)
    		return (NULL);
    	a = 0;
    	while (s[a])
    	{
    		str[a] = f(a, s[a]);
    		a++;
    	}
    	str[a] = 0;
    	return (str);
    }
    ```
    

Es la primera vez que vemos una función pasada como argumentos, básicamente, esto permite que se pueda pasar una lógica específica como argumento de una función, lo que significa que la función puede ser más reutilizable y modular. En otras palabras, hace que el código sea mas flexible y mas adaptable. La función que tenemos es strmapi, esta función recoge como argumentos un string `s` y una función `f` que a su vez recoge `(unsigned int, char)` y devuelve `char *` . Lo que nos piden en esta función es que devulvamos un string resultado de aplicar `f` en todos los caracteres de `s` . Para ello después de comprobar que los valores recibidos son válidos, alojamos en un string definido por nosotros tanta memoria como necesitemos para copiar `s` , después usamos un bucle que recorra todo el string iterando los caracteres de este por la función `f` .

## **striteri**

- CÓDIGO
    
    ```c
    void	ft_striteri(char *s, void (*f)(unsigned int, char *))
    {
    	int	i;
    
    	if (!s)
    		return ;
    	i = 0;
    	while (s[i])
    	{
    		f(i, s + i);
    		i++;
    	}
    }
    ```
    

Realiza lo mismo que strmapi pero esta vez en vez de hacer una copia del string original iterandolo, nos envían la dirección de memoria de `s` para que actuemos directamente sobre esta, haciendolo más simple aunque es más destructivo.

## **putchar_fd**

- CÓDIGO
    
    ```c
    void	ft_putchar_fd(char c, int fd)
    {
    	write(fd, &c, 1);
    }
    ```
    

Cuando aprendimos sobre write al principio de la piscina nos acostumbramos a que la estructura que se usaba en C para write era `write(1, ...)` , sin embargo, esto no tiene porqué ser así. El primer valor de write hace referencia a dónde queremos que escriba la función, por defecto 1 hace referencia a que muestre por pantalla, sin embargo hay veces que lo que queremos es que esto lo escriba en un archivo, para ello trabajaremos con file descriptors. Los fd son números que se asocian a un fichero cuando el programa los abre *(ya hare una pagina rápida sobre como opera C con ficheros) .* Esta función es una simple función para entender que C puede actuar en archivos y realmente no tiene el código mucha explicación

## **putstr_fd**

- CÓDIGO
    
    ```c
    void	ft_putstr_fd(char *s, int fd)
    {
    	int	len;
    
    	if (!s || !fd)
    		return ;
    	len = ft_strlen(s);
    	write(fd, s, len);
    }
    ```
    

Igual que la primera función que trabaja fd, esta función es muy simple, solo hay que llamar a strlen para saber de que tamaño es el string.

## **putendl_fd**

- CÓDIGO
    
    ```c
    void	ft_putendl_fd(char *s, int fd)
    {
    	if (!s || !fd)
    		return ;
    	ft_putstr_fd(s, fd);
    	write(fd, "\n", 1);
    }
    ```
    

Aqui te piden que hagas como en putstr pero poniendo un salto de línea al final, la forma mas fácil de hacer esto es llamando a putstr_fd y luego usando la propia función write.

## **putnbr_fd**

- CÓDIGO
    
    ```c
    void	ft_putnbr_fd(int n, int fd)
    {
    	if (n == -2147483648)
    	{
    		ft_putchar_fd('-', fd);
    		ft_putchar_fd('2', fd);
    		n = 147483648;
    	}
    	if (n < 0)
    	{
    		ft_putchar_fd('-', fd);
    		n *= -1;
    	}
    	if (n >= 0 && n <= 9)
    		ft_putchar_fd(n + '0', fd);
    	else
    	{
    		ft_putnbr_fd(n / 10, fd);
    		ft_putnbr_fd(n % 10, fd);
    	}
    }
    ```
    

Es literalmente la función de la piscina pero en vez de escribir en pantalla escribimos en un archivo.

### FUNCIONES BONUS

<aside>
💡 Para hacer las funciones bonus, es necesario saber qué son los structs, como se definen, para qué sirven y como se usan.

</aside>

[structs](https://www.notion.so/structs-09611a7896904458b354fa37eb0e9f62?pvs=21)

## **lstnew**

- CÓDIGO
    
    ```c
    t_list	*ft_lstnew(void *content)
    {
    	t_list	*new_l;
    
    	new_l = (t_list *)malloc(sizeof(t_list));
    	if (!new_l)
    		return (NULL);
    	new_l->content = content;
    	new_l->next = NULL;
    	return (new_l);
    ```
    

Se nos pide que la función lstnew cree un nuevo nodo, para el que alojaremos memoria con malloc y que lo rellenemos con: lo recibido en el argumento content dentro de el miembreo `content` de nuestro nuevo nodo y NULL en el miembro next, por ultimo se devuelve un puntero a este nodo.  

## **lstadd_front**

- CÓDIGO
    
    ```c
    void	ft_lstadd_front(t_list **lst, t_list *new)
    {
    	if (lst && new)
    	{
    		new->next = *lst;
    		*lst = new;
    	}
    }
    ```
    

En la función lstadd_front estamos recibiendo por argumentos un puntero al primer nodo de una lista enlazada y un nodo que nos piden que metamos al principio de lst. El código que creamos hace primero un condicional que comprueba que sean útiles los argumentos recibidos y luego mete toda la lista `lst` en el miembro `new->next` y modifica a donde apunta `lst` para que apunte ahora a `new` .

## **lstsize**

- CÓDIGO
    
    ```c
    int	ft_lstsize(t_list *lst)
    {
    	int		i;
    	t_list	*actual;
    
    	if (!lst)
    		return (0);
    	i = 1;
    	actual = lst;
    	while (actual->next)
    	{
    		i++;
    		actual = actual->next;
    	}
    	return (i);
    }
    ```
    

La función lstsize devuelve la cantidad de nodos que tiene una lista que recibe por argumentos. Para ello creamos una copia de lst en una t_list que creamos en la propia función, y creamos un bucle while que simplemente compruebe si hay un siguiente nodo y en caso afirmativo incrementa el contador de nodos en uno y pasa al siguiente nodo. Por ultimo devuelve el número de nodos.

## **lstlast**

- CÓDIGO
    
    ```c
    t_list	*ft_lstlast(t_list *lst)
    {
    	t_list	*actual;
    
    	if (!lst)
    		return (0);
    	actual = lst;
    	while (actual->next)
    		actual = actual->next;
    	return (actual);
    }
    ```
    

En lstlast nos envian por argumentos un puntero al comienzo de una lista enlazada y se pide que devolvamos el ultimo nodo de esta. Por lógica entendemos que el último nodo de una lista es aquel cuyo miembro `next` apunta a null. Por tanto simplemente iremos pasando por los diferentes nodos en la lista trabajando con una copia (de nuevo porque no queremos modificar el valor de la lista real) y cuando lleguemos a un punto donde no exista `actual->next` significará que hemos llegado al ultimo nodo, por lo tanto enviamos un puntero a este.

## **lstadd_back**

- CÓDIGO
    
    ```c
    void	ft_lstadd_back(t_list **lst, t_list *new)
    {
    	t_list	*ult;
    
    	if (*lst != 0)
    	{
    		ult = ft_lstlast(*lst);
    		ult->next = new;
    	}
    	else
    		*lst = new;
    }
    ```
    

lstadd_back recibe por argumentos el puntero al comienzo de la lista y un nodo `new` que nos piden que añadamos al final de esta. Creamos un nodo `ult` y ponemos un condicional, en caso de que `lst` no esté vacío, ponemos en ult un puntero al final de la lista y añadimos `new` en         `ult->next` , de forma que lo metemos al final. En caso de que la lista esté vacía, le añadimos el nodo `new` al principio.

## **lstdelone**

- CÓDIGO
    
    ```c
    void	ft_lstdelone(t_list *lst, void (*del)(void *))
    {
    	t_list	*actual;
    
    	if (!lst || !del)
    		return ;
    	del(lst->content);
    	actual = lst;
    	lst = actual->next;
    	free(actual);
    	lst = 0;
    }
    ```
    

La función lstdelone borra un nodo de una lista enlazada y libera la memoria asociada a ese nodo. Toma como entrada un puntero al nodo que se va a borrar y un puntero a una función que se va a utilizar para liberar la memoria asociada al contenido del nodo.

Primero, se comprueba si el puntero al nodo o el puntero a la función son nulos, y en ese caso, la función simplemente retorna sin hacer nada. Después, se llama a la función `del` pasada como argumento con el contenido del nodo como argumento. Esto es necesario para liberar cualquier memoria asignada dinámicamente que se haya almacenado en el contenido del nodo.

Luego, se crea un puntero **`actual`** y se le asigna el valor de **`lst`**. Esto es para que podamos liberar la memoria asociada a **`lst`** sin perder el puntero a la siguiente estructura en la lista enlazada. Se actualiza **`lst`** para que apunte a la siguiente estructura en la lista enlazada. Luego, se libera la memoria asociada a **`actual`**, lo que elimina el nodo de la lista enlazada. Por último, se establece **`lst`** en 0 para garantizar que ya no apunta al nodo que se ha eliminado.

## **lstclear**

- CÓDIGO
    
    ```c
    void	ft_lstclear(t_list **lst, void (*del)(void *))
    {
    	t_list	*act;
    
    	if (!lst || !del)
    		return ;
    	while ((*lst))
    	{
    		del((*lst)->content);
    		act = *lst;
    		*lst = act->next;
    		free(act);
    	}
    	*lst = 0;
    }
    ```
    

La función lstclear recibe como parámetros un puntero al comienzo de la lista **`lst`** y un puntero a una función **`del`** que se encarga de liberar la memoria del contenido de cada nodo.

La función recorre la lista desde el primer nodo hasta el último, utilizando un puntero auxiliar **`act`**. En cada iteración se elimina el nodo actual, se libera su contenido mediante la función **`del`**, se actualiza el puntero **`lst`** al siguiente nodo y se libera la memoria del nodo actual.

Al finalizar el proceso, se iguala el puntero a 0 para indicar que la lista está vacía.

## **lstiter**

- CÓDIGO
    
    ```c
    void	ft_lstiter(t_list *lst, void (*f)(void *))
    {
    	if (!lst || !f)
    		return ;
    	while (lst)
    	{
    		f(lst->content);
    		lst = lst->next;
    	}
    }
    ```
    

La función lstiter recorre una lista enlazada y aplica una función dada a cada elemento de la lista. Toma dos argumentos: el primer argumento **`lst`** es un puntero al primer elemento de la lista y el segundo argumento **`f`** es un puntero a la función que se aplicará a cada elemento.

La función comienza comprobando si tanto **`lst`** como **`f`** son diferentes de NULL. Si alguno de ellos es NULL, la función simplemente devuelve sin hacer nada.

Luego, la función recorre la lista mientras que el puntero **`lst`** no sea nulo. En cada iteración, se aplica la función **`f`** al contenido de la estructura del nodo actual y luego se avanza al siguiente nodo de la lista.

## **lstmap**

- CÓDIGO
    
    ```c
    t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
    {
    	t_list	*newlist;
    	t_list	*actual;
    
    	if (!lst)
    		return (NULL);
    	newlist = 0;
    	while (lst)
    	{
    		actual = ft_lstnew(f(lst->content));
    		if (actual)
    		{
    			ft_lstadd_back(&newlist, actual);
    			lst = lst->next;
    		}
    		else
    		{
    			ft_lstclear(&newlist, del);
    			return (0);
    		}
    	}
    	return (newlist);
    }
    ```
    

La función llamada ft_lstmap que toma como argumento una lista enlazada de tipo **`t_list`**, una función **`f`** que toma como argumento un puntero genérico y devuelve un puntero genérico, y una función **`del`** que libera el contenido de un nodo de la lista.

La función crea una nueva lista enlazada llamada **`newlist`** y un puntero llamado **`actual`** que se utilizará para iterar a través de la lista original. Si la lista original es **`NULL`**, la función devuelve **`NULL`**.

Luego, la función itera a través de la lista original y para cada nodo crea un nuevo nodo usando la función **`ft_lstnew`** y la función **`f`** que toma como argumento el contenido del nodo actual. Si el nuevo nodo se crea correctamente, se agrega al final de la nueva lista enlazada usando la función **`ft_lstadd_back`**. Si no se puede crear el nuevo nodo, la función libera la nueva lista enlazada creada hasta el momento usando la función **`ft_lstclear`** y devuelve **`NULL`**.

Finalmente, la función devuelve un puntero al primer nodo de la nueva lista enlazada.

En resumen, esta función toma una lista enlazada, aplica una función a cada nodo y crea una nueva lista enlazada con los resultados de la aplicación de la función en cada nodo.
