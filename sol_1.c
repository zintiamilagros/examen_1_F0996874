//------------------------------------------------------------------------------
// NumPerfecto
// Este programa obtiene los números perfectos, abundantes y deficientes desde
// el 4 hasta un limite maximo introducido por el usuario.
//------------------------------------------------------------------------------
Program NumPerfecto;
const Maximo = 1000;
      MaxErrores = 3;
var n, Numero, NumError: Word;
 
//------------------------------------------------------------------------------
// SumaDeDiv
// Calcula la suma de los divisores de un número, o sea aquellos que dan resto
// cero al efectuar la división. La comprobación solo se hace hasta la mitad del
// número porque dividirlo por un valor que es más de la mitad nunca puede dar
// una división exacta.
//------------------------------------------------------------------------------
Function SumaDeDiv(Num: Word): Word;
var n, MaxDiv: Word;
Begin
  Result := 0;
  MaxDiv := Num div 2;
  for n := MaxDiv downto 1 do
    if Num mod n = 0 then
      Inc(Result, n);
End;
 
//------------------------------------------------------------------------------
// Comparar
// Compara el número con la suma de sus divisores y emite un texto según el
// resultado de la comparación.
//------------------------------------------------------------------------------
Procedure Comparar(Num: Word);
var NumDiv: Word;
Begin
  if (Num >= 4) and (Num <= Numero) then
  Begin
    NumDiv := SumaDeDiv(Num);
 
    if NumDiv < Num then
      writeln('El numero ', Num, ' es Deficiente.')
    else if NumDiv > Num then
      writeln('El numero ', Num, ' es Abundante.')
    else if NumDiv = Num then                                        // Esta comprobación no es necesaria
      writeln('El numero ', Num, ' es ----------->PERFECTO.')
  End;
End;
 
//------------------------------------------------------------------------------
// Programa principal
// Solicita el número hasta el cual se va a realizar el cálculo. Si se introduce
// tres veces seguidas un límite erróneo, tira la toalla.
//------------------------------------------------------------------------------
Begin
  NumError := MaxErrores;
  writeln('Introduzca un numero entre 4 y 1000');
  Repeat
    readln(Numero);
    if (Numero < 4) or (Numero > Maximo) then
    Begin
      writeln('Numero introducido fuera del rango 4..1000. Pruebe otra vez.');
      Dec(NumError);
    End Else
      break;
  Until NumError < 1;
  if NumError = 0 then
    writeln('Programa BLOQUEADO por usuario TORPE')
  else
    for n := Numero downto 1 do
      Comparar(n);
  writeln('Pulse Intro si quiere.');
  readln;
End.