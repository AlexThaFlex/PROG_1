//usa strings multidimensionais para guardar o url da img e tranfere pelo wget.

/*Escreva um programa que guarde todas as imagens inclu´ıdas numa p´agina HTML. Para isso, dever´a procurar
todas as tags <img> no ficheiro HTML e extrair o respetivo endere¸co da imagem. Por exemplo, na seguinte tag:
1 <img src="https://imgs.xkcd.com/comics/good_code.png">
o endere¸co da imagem ´e https://imgs.xkcd.com/comics/good code.png. Assuma que o endere¸co ´e
sempre indicado depois de src= e entre aspas.
Para descarregar uma imagem use o programa wget atrav´es da fun¸c˜ao system da biblioteca stdlib.h. Por
exemplo, para descarregar a imagem anterior, a instru¸c˜ao seria:
1 system("wget https://imgs.xkcd.com/comics/good_code.png");
Teste o seu programa com o ficheiro pagina.html utilizando o comando ./a.out < pagina.html*/