# iujc_cv4
Třetí cvičení předmětu IUJC (10.10.2016)

##Příklad 1
 Vytvořte program, který načte libovolný řetězec o konstantní délce (včetně mezer). Zjistěte délku řetězce pomocí funkce z knihovny <string.h>. V načteném řetězci nahraďte každý třetí znak nějakým vaším znakem (např. ‘_‘ nebo ‘*’ atd.) a takto upravený řetězec vytiskněte na obrazovku. Ukázka viz Obrázek 1. 
 
##Příklad 2
 

 Mějme následující definici: 
```c
char str1[20],str2[20],str3[20],zn; 

char *ukStr=NULL; 

int porovnej=0; 
```
Načtěte str1 a str2. Zjistěte a vypište délku obou řetězců. Zkopírujte obsah str2 do str3. Dále připojte řetězec str3 k str1 a vypište. Načtěte z klávesnice znak (do proměnné zn). Zjistěte, zda se zadaný znak v řetězci vyskytuje, pokud ano tak vypište na jaké pozici (pomocí rozdílu dvou ukazatelů, (ukStr)) Porovnejte str1 a str2 a vypište, který z nich je větší popřípadě, že jsi jsou rovny (využijte k rozhodnutí příkaz switch a proměnou porovnej, která obsahuje výsledek porovnání). 

Pozn.: pro práci s řetězci využijte funkce z knihovny <string.h>. 
 
##Příklad 3
Vytvořte program pro rozbor věty zadané z klávesnice. Program bude provádět statistiku počtu jednotlivých samohlásek (a, e, i, o, u, y). Musí být ošetřeny, jak zadání malého písmena, tak i velkého písmena. Na závěr program vypíše statistiku samohlásek. Využijte dvě pomocná pole (vzor, vzorCetnost), která budou obsahovat (i) znaky pro statistiku a (ii) četnosti jednotlivých znaků. Tyto pomocná pole jsou mapována pomocí indexů, tedy četnost znaku vzor[i] je uložena v vzorCetnost[i]. 
