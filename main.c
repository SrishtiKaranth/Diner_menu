#include<stdio.h>
void main()
{
  int i;
    printf("\n Welcome to Popeye's Diner!!!");
    printf("\n Check out our brand new menu that will leave you wanting for more!! \n");
    printf(" *****Menu***** \n");
    printf("Choose an item - press \n");
    printf("1 for FRENCH FRIES \n");
printf("Crispy ,golden brown , addictively delicious\n");
printf("2 for SANDWICH\n");
printf("Fresh seasonal grilled veggies ,choice of pesto or Marina sauce ,with melted herb Mozeralla on a spinach wrap , toasted \n");
printf("3 for BURGER \n");
printf("Beyond meat plant -based burger patty, melted cheese ,fresh lettuce, crispy onions, sun-dried tomatoes from the best farms,sweet pickle ,tasty jalapenos,chilli oil, BBQ sauce on a soft bun \n");
printf("4 for PASTA \n");
printf("Thin Fettuccini pasta with mixed sauce , minced garlic, chilly for zest flavour , extra virgin olive oil,spicy paparika and roasted mushrooms topped with aged parmesan cheese\n");
printf("5 for PIZZA \n");
printf("Homemade pizza dough , homemafe pizza sauce,pepperoni,Italian sausage ,bacon,jalapeno ,mushroom,crispy bell pepper and onions ,herbed mozzeralla cheese topped with extra melted cheese\n");
scanf("\n %d",&i);
switch(i)
{
case 1: printf(" \n Popeye's item choosen - French fries");
printf("\n Price -  Rs.99");
break;
case 2: printf(" \n Popeye's item choosen - Sandwich .");
printf("\n Price - Rs.149");
break;
case 3: printf(" \n Popeye's item choosen - Burger .");
printf("\n Price - Rs.129");
break;
case 4: printf(" \n Popeye's item choosen - Pasta .");
printf("\n Price - Rs.179");
break;
case 5: printf(" \n Popeye's item choosen - Pizza.");
printf("\n Price - Rs.239 ");
break;

default: printf("\n Sorry we don't serve that in Popeye's Diner ,invalid entry");
}
printf("\n Thank you for choosing our diner . We hope to serve you next time.");
}
