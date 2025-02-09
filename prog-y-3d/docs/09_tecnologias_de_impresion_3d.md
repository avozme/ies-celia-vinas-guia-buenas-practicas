---
layout: page
title: 3. Tecnologías de impresión 3D
permalink: /tecnologias-de-impresion-3d/
nav_order: 3
has_children: true
parent: Introd. a la prog. y al diseño 3D
---

# 3. Tecnologías de impresión 3D
{: .no_toc }

- TOC
{:toc}

Estamos acostumbrados a la **impresión 2D**, ¿verdad? Desde hace décadas las impresoras 2D imprimen en papel a un precio asequible y con multitud de técnicas: láser, inyección de tinta, matricial, térmica, etc.

En la segunda década del siglo XXI, **la impresión 3D asequible también se convirtió en una realidad**. Sin embargo, todavía es un mundo bastante desconocido para muchas personas. 

En este capítulo vamos a recorrer la historia de las impresoras 3D, en qué consiste este tipo de impresión y cómo funciona, los tipos de impresoras que existen y cómo podemos iniciarnos en este mundillo.

## 3.1. Tecnologías de impresión 3D

La **impresión 3D** se refiere a un un grupo de *tecnologías de fabricación capaces de crear objeto tridimensionales mediante la superposición de capas sucesivas* de un determinado material. 

Por lo tanto, con estas técnicas se pueden **crear objetos físicos a partir de un modelo digital**. 

### 3.1.1. Un poco de historia

Aunque nos puede parecer una tecnología moderna, en el año 1976 ya se desarrollaron los primeros equipos y materiales de construcción para la impresión en 3D. Unos años después, en 1981, Hideo Kodama, uno de los precursores de la impresión 3D, inventó dos métodos de fabricación de un modelo tridimensional con un polímero plástico que se endurecía al darle la luz.

![Primeras máquinas de impresión 3D - Hideo Kodama](/docs/prog-y-3d/_site/assets/images/09-01-hideo-kodama.jpg)
<div style='font-size: 75%; font-style: italic'>
Hideo Kodama y sus primeros diseños de impresora 3D de los años 70.
</div>

En 1984 se patentaron varias tecnologías basadas en un proceso llamado **estereolitografía**, que se basa en ir añadiendo capas mediante polímeros plásticos que se endurecían al aplicarles radiación ultravioleta. Además, se definió un sistema para generar objetos tridimensionales mediante la creación de un patrón del objeto que dio lugar al **formato de archivo STL**, que es ampliamente aceptado hoy en día para la impresión 3D.

En el año 1992 se desarrolló la primera máquina de impresión 3D de tipo **SLA** (tecnología estereolotigráfica), obra de la compañía *3D Systems*. Un láser ultravioleta iba solidificando un polímero capa por capa para crear objetos tridimensionales. A pesar de que no eran piezas muy perfectas, hacía pensar en el gran potencial que podía ofrecer este tipo de máquinas.

![Primera máquina de impresión 3D SLA](/docs/prog-y-3d/_site/assets/images/09-02-primera-impresora-sla.jpg)
<div style='font-size: 75%; font-style: italic'>
Aspecto de la primera impresora 3D por SLA, del año 1992.
</div>

Siete años después, en 1999, hubo bastante revuelo cuando el equipo de investigación del Instituto de Wake Forest de Medicina Regenerativa (Carolina del Norte, EEUU) presentó la primera impresora 3D capaz de crear tejido orgánico. Esto abrió otro campo de aplicación de la tecnología de impresión 3D del que se esperan grandes resultados en los próximos años.

En 2006 se construyó la primera impresora de tipo **SLS** o de sintetización de láser selectivo. Esta tecnología utiliza un láser para fundir materiales durante el proceso de impresión 3D. Representó una gran esperanza en la fabricación de piezas industriales, prótesis, etc. Un par de años más tarde, a través de un proyecto llamado *RepRap*, vió la luz la primera impresora capaz de replicar sus propios componentes, lo que permitía construir impresoras idénticas, piezas de repuesto o impresoras autorreparables.

En el año 2011, los ingenieros de la Universidad de Shouthampton diseñaron un avión no tripulado impreso en 3D y fabricado en tan solo una semana. En ese mismo año, se pudo ver también el primer prototipo de un coche cuya carrocería había sido creada a través de la impresión 3D.

En los últimos años hemos visto aplicaciones múltiples de la impresión 3D: implantes dentales, prótesis de huesos, material sanitario, piezas industriales, joyas... Y también hemos asistido a un abataramiento progresivo de las impresoras y sus consumibles.

### 3.1.2. Cómo funciona la impresión 3D

El proceso de impresión 3D consiste en **crear objetos en tres dimensiones a partir de la superposición de capas de abajo hacia arriba**.

La impresión 3D requiere de la cooperación de 3 elementos:

* Un **software** adecuado para crear los modelos 3D y controlar el proceso de impresión.
* La propia **impresora 3D**.
* Los **consumibles** o materiales utilizados durante el proceso de impresión. 

Antes de comenzar la impresión, el software de impresión divide el modelo 3D en capas tan finas como el diámetro del material que se vaya a emplear para imprimir. Para cada capa, la impresora se va desplazando sobre el plano para ir liberando material sobre las coordenadas correspondientes y así ir formando la figura en tres dimensiones. El material de impresión, una vez depositado, se endurece y adquiere su forma definitiva.

Por lo tanto, lo primero que necesitamos para imprimir un objeto en tres dimensiones es **un archivo creado con algún software de modelado 3D**. 

Lo siguiente es utilizar **el material más adecuado** para su fabricación. Las impresoras más habituales en la actualidad utilizan materiales **termoplásticos**, es decir, filamentos de plástico que se ablandan con el calor para poder darle forma, y que vuelve a endurecerse al enfriarse. Sin embargo, también existen impresoras capaces de utilizar otros materiales como metal, resinas sintéticas u otros polímeros. Estas impresoras tienen un coste mayor puesto que deben ser capaces de fundir los materiales a mayor temperatura.

Y, por último, está **la propia impresora**. Casi todas se parecen entre sí y la mayor diferencia se da en su tamaño, su velocidad y el tipo de material que pueden utilizar para imprimir los modelos 3D.

<iframe width="560" height="315" src="https://www.youtube.com/embed/yW4EbCWaJHE" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
<div style='font-size: 75%; font-style: italic'>
Ejemplo de impresión 3D por SLA o estereolitografía
</div>

### 3.1.3. Métodos de impresión 3D

Aunque la mayoría de las impresoras actuales actúan fundiendo un material para ir creando las capas, hay algunas que depositan materiales líquidos que son solidificados con diferentes tecnologías, como la luz ultravioleta. 

Entre los métodos más utilizados en la impresión 3D tenemos:

* **Modelado por deposición fundida (FDM)**: el material fundido, generalmente un termoplástico, se deposita en capas que se solidifican a temperatura ambiente. *Son las impresoras más habituales en la actualidad.*

* **Estereolitografía (SLA)**: se utilizan resinas líquidas que se solidifican con luz ultravioleta. Una luz láser va creando capas de resina sólida hasta formar el objeto. Los objetos así obtenidos suelen ser mucho más perfectos y duraderos que los que se obtienen con la tecnología FDM, aunque el coste de estas impresoras es considerablemente mayor. Por eso se usan más en la industria que en la impresión doméstica, aunque ya existen los primeros modelos de sobremesa.

* **Impresión por inyección**: En este método, la impresora crea los objetos inyectando un líquido dentro de un molde, lo que permite crear objetos con gran precisión y rapidez y, además, mezclar materiales y colores. El molde se retira cuando el líquido se ha solidificado. Los propios moldes pueden fabricarse previamente con impresoras 3D de tipo SLA.

* **Fotopolimerización por luz ultravioleta**: se utiliza un recipiente de polímero líquido que es expuesto a la luz de un proyector bajo determinadas condiciones. El polímero se endurece a medida que la placa de montaje se va moviendo hacia abajo muy poco a poco para ir creando las distintas capas.

* **Fotopolimerización por absorción de fotones (SLS)**: el objeto 3D es creado a partir de un bloque de gel que un láser va endureciendo selectivamente. Posteriormente, se retiran las partes de gel no endurecidas por el láser, y el resultado es el objeto 3D.

![Tipos de impresora 3D](/docs/prog-y-3d/_site/assets/images/09-04-tipos-de-impresora-3d.jpg)
<div style='font-size: 75%; font-style: italic'>
Algunos tipos de impresora 3D
</div>

### 3.1.4. Materiales

Como hemos visto, se utilizan diferentes materiales según la tecnología de impresión. Cada material satisface una serie de propiedades (resistencia, precisión, conductividad, etc) y las piezas que se crean a partir de ellos tendrán diferentes usos.

Los **materiales más utilizados** en la actualidad son:

* **Ácido poliláctico (PLA)**: Se trata de un termoplástico con propiedades similares a las del tereftalato de polietileno (PET) que se utiliza habitualmente para hacer envases, solo que más fácil de colorear. 

* **Tereftalato de polietileno (PET)**: el mismo plástico utilizado para envases de bebidas. Se trata de un plástico ligero, resistente y reutilizable indefinidamente. Su problema es que no admite muchas coloraciones.

* **Laywood**: es similar al PLA, pero mezclado con madera en polvo en diferentes porcentajes para ofrecer un resultado con un aspecto similar a la madera y que se puede pintar y lijar fácilmente.

* **Acrilonitrilo butadieno estireno (ABS)**: un plástico muy resistente y que aguanta altas temperaturas. Ofrece cierta flexibilidad y es fácil de pintar.

* **Poliestireno de alto impacto (HIPS)**: es una variedad de los poliestireno (el clásico "corcho blanco"), muy ligero aunque bastante frágil. Se modifica mediante diversos aditivos para mejorar su resistencia o su elasticidad.

* **Elastómero termoplástico (TPE)**: otro termoplástico, en este caso dotado de una enorme elasticidad.

* **Laybrick**: Se trata de un material que resulta de la mezcla de ciertos plásticos y yeso. Los objetos adquieren así un aspecto semejante a la piedra y se puedan pintar y lijar fácilmente.

* **Nylon**: fibra textil sintética, muy elástica y resistente, utilizada para la fabricación y confección de tejidos y telas.

* **Metales amorfos (BGM)**: aleaciones metálicas cuya estructura atómica (denominada "amorfa" o desordenada) permite que sean fácilmente maleables antes de su solidificación.

![Materiales para impresoras 3D](/docs/prog-y-3d/_site/assets/images/09-05-materiales-impresoras-3d.jpg)
<div style='font-size: 75%; font-style: italic'>
Algunos de los materiales disponibles en la actualidad para impresión 3D
</div>

### 3.1.5. Aplicaciones de la impresión en 3D

Las **aplicaciones** de la impresión 3D son múltiples y muy variadas gracias a las diferentes técnicas y materiales que se pueden utilizar en función del tipo de objeto, precisión de detalles y resistencia.

Algunos de los ámbitos de aplicación de la impresión de objetos en tres dimensiones son:

* **Medicina y salud**: Ya se pueden crear ciertas prótesis con impresoras 3D (por ejemplo, en odontología). Muy pronto se fabricarán tejidos tolerables por el organismo. En el momento de escribir estas líneas, por ejemplo, la fabricación de piel sintética biocompatible está en fase de experimentación con animales. En un futuro no muy lejano se podrán recrear órganos humanos totalmente funcionales. También se puede fabricar material de uso médico con gran rapidez y facilidad. 

* **Educación**: se pueden crear modelos tridimensionales de conceptos abstractos o difícilmente disponibles para facilitar su estudio y comprensión: figuras geométricas, órganos, animales, piezas encajables, etc.

* **Industria**: en el sector industrial, poder crear piezas para repuestos o para maquinaria nueva supone un gran ahorro de tiempo y de costes.

* **Arqueología**: se pueden replicar objetos reales sin el complejo y laborioso proceso de modelado, reconstrucción, etc.

* **Moda**: la industria de la moda también está aprovechando las ventajas de la impresión 3D para fabricar de forma rápida y sin apenas costes accesorios, calzado, complementos, bolsos, joyas o incluso prendas de ropa impresas en piezas que posteriormente se ensamblan entre sí.

* **Comida y alimentación**: una de las aplicaciones más increíbles de la impresión 3D es la posibilidad de crear alimentos a partir de materiales comestibles y moldeables. Otro uso muy habitual es la fabricación de moldes en repostería.

* **Otros**: la impresión 3D se puede aplicar en muchos otros ámbitos: fabricación de juguetes, réplica de antigüedades, jardinería, realización de maquetas para arquitectura, cine o televisión, creación de armamento (sí, sí: lo has leído bien; las armas creadas con impresoras 3D ya son un problema de seguridad pública)... Muchas de sus aplicaciones ni siquiera las hemos imaginado todavía.

![Maqueta construida con impresora 3D](/docs/prog-y-3d/_site/assets/images/09-06-maqueta-3d.jpg)
<div style='font-size: 75%; font-style: italic'>
La realización rápida, barata y precisa de maquetas es un ejemplo de aplicación práctica de de las impresoras 3D
</div>

### 3.1.6. El futuro de la impresión 3D

La impresión 3D ha evolucionado mucho en los últimos años y ya ha quedado clara la infinidad de posibilidades que ofrece. Se espera que en el futuro cercano cobre aún mayor protagonismo.

Las **aplicaciones futuras** de las impresoras 3D que probablemente más van a **revolucionar el mundo** son:

* La creación de órganos humanos artificiales: corazones y riñones impresos serán casi con total seguridad los primeros en trasplantarse con éxito a seres humanos.
* Fabricación de viviendas a medida, impresas en piezas que luego se ensamblarán, con propiedades térmicas y acústicas nunca vistas hasta ahora, y con unos tiempo de construcción de días en lugar de meses o años.
* Creación de alimentos nuevos, nutricionalmente equilibrados, económicos y sostenibles desde el punto de vista ambiental.

![Comida impresa con impresora 3D](/docs/prog-y-3d/_site/assets/images/09-07-comida-3d.jpg)
<div style='font-size: 75%; font-style: italic'>
Objetos 3D comestibles creados con una impresora
</div>

## 3.2. Modelado y diseño diseño 3D

Para imprimir cualquier cosa en 3D, primero hay que diseñarla y modelarla con el software adecuado.

El **modelado y diseño 3D** se ha convertido en unas de las tendencias con más fuerza en el campo del diseño en las últimas décadas, no solo por las impresoras 3D. Se trata de un ámbito el diseño que cuenta con gran versatilidad y posibilidades infinitas en muchísimos campos, como la arquitectura, la ingeniería o la industria del entretenimiento.

En este apartado vamos a conocer algo más sobre el diseño y modelado 3D.

### 3.2.1. En qué consiste el diseño 3D

El diseño y modelado 3D es una manera de **recrear objetos trimensionales en la pantalla plana del ordenador**.

Estos objetos se crean, generalmente, mediante **la unión de muchos polígonos** de pequeño tamaño entre sí, constituyendo lo que se denomina una **malla tridimensional**. Los polígonos son lo suficientemente pequeños como para que no se aprecie su existencia y, además, el software 3D es capaz de suavizar la conexión entre ellos.

![Ejemplo de modelo de malla](/docs/prog-y-3d/_site/assets/images/09-08-malla-3d.jpg)
<div style='font-size: 75%; font-style: italic'>
Ejemplo de modelo de malla creado con Blender
</div>

A los polígonos se les aplica una **textura** para simular materiales, y los modelos pueden ser mejorados mediante la iluminación y otros efectos específicos, como el movimiento del agua o la simulación de fenómenos atmosféricos. 

![Ejemplo de modelo de malla texturizado](/docs/prog-y-3d/_site/assets/images/09-09-malla-texturizada.jpg)
<div style='font-size: 75%; font-style: italic'>
El modelo anterior, texturizado
</div>

Los modelos se pueden rotar, escalar y, en general, manipular muy fácilmente con el software adecuado. También se pueden animar (para la industria del cine, de la publicidad o de los videojuegos), renderizar (para crear imágenes fotorrealistas) o exportar a diferentes formatos (para, por ejemplo, imprimirlos en una impresora 3D).

### 3.2.2. Breve historia del diseño 3D

Ya en la década de 1960 se crearon los primeros sistemas de Diseño Asistido por Computadora (CAD). Patrick Hanratty, conocido mundialmente conocido como "el Padre del CAD", ideó el primer sistema CAD, llamado **PRONTO**, ni más ni menos que en 1957.

![PRONTO, el primer sistema de CAD de la historia](/docs/prog-y-3d/_site/assets/images/09-10-pronto.jpg)
<div style='font-size: 75%; font-style: italic'>
PRONTO, el primer sistema CAD de la historia
</div>

En los años 70 aparecieron varios sistemas de diseño y dibujo automatizado, sobre todo orientado al 2D, pero no fue hasta los años 80, con la popularización del ordenador personal, que se popularizaron los programas de diseño 2D entre el público en general. El más popular de todos fue, sin duda, **AutoCAD**, cuya primera versión salió al mercado en 1982. AutoCAD sigue siendo hoy la aplicación de referencia en arquitectura y delineación. 

![AutoCAD en su versión 1 de 1982 y en una versión reciente](/docs/prog-y-3d/_site/assets/images/09-11-autocad.jpg)
<div style='font-size: 75%; font-style: italic'>
AutoCAD en su versión 1 (año 1982) y en una versión reciente
</div>

Ya en los años 90 se generalizaron los programas de diseño 3D, como 3D Studio o Maya. La industria del cine, a partir de la aparición del estudio *Pixar* y su gran éxito de 1995, *Toy Story*, los hizo mejorar rápidamente, y esas mejoras llegaron muy pronto al mercado de la informática personal.

En la actualidad, existe una enorme variedad de herramientas de diseño 2D y 3D, tanto libres como propietarias, algunas online y otras instalables en nuestros ordenadores o smartphones, algunas muy simples y otras tremendamente complejas y orientadas al mercado profesional.

![Blender, el software libre para modelado y animación 3D](/docs/prog-y-3d/_site/assets/images/09-12-blender.jpg)
<div style='font-size: 75%; font-style: italic'>
Blender es el software libre para modelado y animación 3D más popular y más completo del mercado
</div>

### 3.2.3. Programas de diseño 3D

Aunque, como hemos dicho, hay muchos programas de modelado y diseño 3D, estos son algunos de los más importantes:

* **Maya**. Creado por Autodesk (los creadores de AutoCAD), es un programa animación, renderizado y simulación. También puede hacer modelado 3D, aunque no es su fuerte. Se utiliza en el desarrollo de videojuegos, películas de animación y efectos visuales para cine, televisión y publicidad.

* **3DS MAX**. También conocido como 3D Studio Max, es la apuesta de Autodesk para hacer modelado 3D.

* **Blender**. Un software libre nacido para competir con Maya y 3DS. Aunque al principio resultaba más limitado, en la actualidad sus prestaciones no tienen nada que envidiar a sus hermanos propietarios. Es una herramienta todo-en-uno: permite hacer modelado 2D y 3D, animación, renderizado y simulación. Es altamente configurable y se puede programar en Python. Funciona en cualquier plataforma (Windows, MAC o Linux).

* **Sketchup**. Es otro programa de modelado 2D y 3D muy popular, utilizado sobre todo en el ámbito de diseño de interiores, diseño industrial y arquitectura.

* **Solidworks**. Es un software de diseño 3D bastante popular, sobre todo en el ámbito educativo, aunque también tiene aplicaciones profesionales. Es propietario y solo corre bajo sistemas Windows.

* **TinkerCAD**. Un herramienta online de Autodesk para hacer modelos 3D y descargarlos. Su uso es gratuito y, aunque es más limitada que los otros programas, el hecho de que esté disponible online, sin necesidad de instalar ningún programa adicional en nuestro ordenador, la hace muy interesante.

Pero modelo creado con estos programas no puede imprimirse directamente: antes hay que **dividirlo en capas** (*slices*) con un software específico, como **Makerware**, **Cura** o **Repetier**. Estos programas nos dejarán especificar ciertos parámetros de la impresión, como la altura de cada capa. A menor altura, más precisa (aunque más lenta) resultará la impresión.

### 3.2.4. Formatos de archivo

Los modelos 3D creados con cualquiera de estos programas (o muchos otros que existen en el mercado) pueden manejar muchos formatos, pero en impresión 3D suele usarse el **formato STL**. La mayoría de las impresoras admitirán modelos 3D almacenados con este formato.

Cuando el modelo 3D está fragmentado en capas, ya lo tenemos listo para pasarlo a nuestra impresora. La mayoría de ellas cuentan con un puerto USB para poder insertar una memoria Flash o un disco duro externo donde debemos llevar guardado el modelo que queremos imprimir. Algunos modelos más avanzados también disponen de una conexión de red.

## 3.3. Impresión 3D por FDM

Las **impresoras 3D por FDM** son sin duda **las impresoras de 3D más extendidas en la actualidad**, ya que son relativamente sencillas de construir y baratas de adquirir.

FDM, por cierto, significa *modelado por deposición fundida* (o *fused deposition modeling* en inglés).

Las impresoras FDM basan en 4 elementos principales: 

* Una **placa** (también llamada **cama**) de impresión en la que se imprime la pieza.
* Una **bobina de filamento termoplástico** que sirve como material de impresión
* Una **cabeza de extrusión** también llamada **extrusor**. 
* Un **bastidor** donde descansa el extrusor y que le permite moverse en los 3 ejes del espacio (X, Y, Z).

![Partes de una impresora 3D por FDM](/docs/prog-y-3d/_site/assets/images/09-13-impresora-fdm-partes.jpg)
<div style='font-size: 75%; font-style: italic'>
Partes de una impresora 3D por FDM
</div>

El filamento es succionado lentamente por el extrusor, que lo calienta, lo derrite y lo deposita de forma precisa sobre la cama de impresión. El extrusor se puede mover sobre la cama en cualquiera de los 3 ejes del espacio, y va ascendiendo poco a poco conforme avanza la impresión, para depositar así cada capa del modelo.

La velocidad de impresión puede ajustarse en la mayoría de las impresoras. Si el modelo 3D es muy complejo, tendremos que usar una velocidad baja para que se imprima correctamente, con lo que la impresión puede demorarse varias horas. En cambio, un modelo 3D sencillo puede imprimirse a alta velocidad y estar listo en minutos.

La impresión 3D comienza cuando la máquina alcanza **una temperatura alrededor de los 200°C**, necesaria para la fusión del material termoplástico.

Entre los **materiales de impresión 3D** más populares en las impresoras FDM se encuentran el **PLA** (ácido poliacético) y el **ABS** (Acrilonitrilo butadieno estireno). Son plásticos baratos y resistentes, que funden a temperaturas relativamente bajas (unos 200º C) y que se pueden encontrar en bobinas de muchos colores en el mercado.

El modelo no debe moverse ni un milímetro durante la impresión, o acabará saliendo un monstruo deforme. Para lograrlo, es habitual impregnar la cama con alguna sustancia levemente pegajosa (un poco de laca para el pelo suele dar buen resultado). Algunos modelos, por su forma, pueden necesitar soportes específicos para no caerse o desplazarse mientras se imprimen. Estos soportes pueden estar hechos del mismo material que el objeto impreso, con lo cual quedarán adheridos a él, o de un material que sea soluble en agua para poder retirarlos posteriormente sumergiendo la pieza en agua. 

Obviamente, el tamaño máximo del objeto que se puede imprimir con una de estas impresoras depende del tamaño de la cama y del tamaño del bastidor donde va colocado el extrusor. A mayor tamaño, mayor es el precio de la impresora.

Algunas impresoras 3D domésticas de gama alta están equipadas con varios extrusores para combinar varios colores o materiales.

<iframe width="560" height="315" src="https://www.youtube.com/embed/ik39_sv-wgQ" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
<div style='font-size: 75%; font-style: italic'>
Una impresora 3D por FDM trabajando
</div>

## 3.4. Actividades propuestas

**Ejercicio 1**. Busca tres aplicaciones de las impresoras 3D (presentes o futuras) que te parezcan sorprendentes y que no se hayan mencionado en este tema.

**Ejercicio 2**. Busca los precios actuales de los tipos principales de impresora 3D. Para cada tipo de impresora, busca al menos tres modelos: uno de gama baja, otro de gama media y otro de gama alta. Elabora una tabla comparativa. ¿Qué tipo de impresora es, en promedio, más asequible? ¿Y cuáles son las más caras?

**Ejercicio 3**. No todo lo que rodea a las impresoras 3D son buenas noticias. Cada vez que los seres humanos inventamos una nueva tecnología, a alguien se le ocurre utilizarla de manera poco recomendable. Lee [este artículo](https://www.vozpopuli.com/internacional/armas-impresoras-3d-europa.html) y trata de imaginar otros peligros que pueden suponer, en el presente y en el futuro, las impresoras 3D.

**Ejercicio 4**. En el tema hemos mencionado los paquetes de software de modelado 3D más importantes, como *Maya*, *Blender* o *3DS Max*. Busca en internet información acerca de qué software utiliza la industria del entretenimiento (cine, televisión, publicidad, videojuegos...) para hacer los modelos y animaciones 3D que vemos a diario.

**Ejercicio OBLIGATORIO**. En Moodle encontrarás un [Wiki colaborativo](https://educacionadistancia.juntadeandalucia.es/centros/almeria/mod/wiki/view.php?id=395914) sobre los distintos tipos de impresora que existen. Agrupados en parejas, tenéis que investigar uno de los tipos de impresora siguiendo las pautas que se indican en el propio Wiki.