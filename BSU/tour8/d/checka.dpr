{ Городская олимпиада школьников Санкт-Петербурга 2001 года  }
{ Практический тур                                           }
{ Задача: "Сравнение строк"                                  }
{ Автор: И.В.Романовский                                     }
{ Проверяющая программа: Андрей Станкевич                    }

uses
  testlib;

var
  i, j, k, m, n, ja, pa, l: longint;
  a, b, a2, b2: array [0..10000] of char;


begin
  n := inf.readlongint;
  m := inf.readlongint;
  ja := ans.readlongint;
  pa := ouf.readlongint;

  if ouf.seekeof then
  begin
    quit(_wa, '');
  end;
  ouf.reset;
  pa := ouf.readlongint;

  inf.skip([#13,#10]);
  for i := 1 to n do
    a[i] := inf.nextchar;
  inf.skip([#13,#10]);
  for i := 1 to m do
    b[i] := inf.nextchar;

  ouf.skip([#13,#10]);
  while not ouf.eoln do
  begin
    inc(l);
    a2[l] := ouf.nextchar;
  end;
  ouf.skip([#13,#10]);
  for i := 1 to l do
  begin
    if ouf.eoln then
      quit(_wa, 'Строки различной длины1');
    b2[i] := ouf.nextchar;
  end;
  if not ouf.eoln then
    quit(_wa, 'Строки различной длины2');


  j := 1;
  for i := 1 to n do
  begin
    while (j <= l) and (a2[j] = '*') do
      inc(j);
    if (j > l) or (a2[j] <> a[i]) then
      quit(_wa, 'Первая строка неверно дополнена "*"-ми');
    inc(j);
  end;
  while j < l do
  begin
    if a2[j] <> '*' then
      quit(_wa, 'Первая строка неверно дополнена "*"-ми');
    inc(j);
  end;

  j := 1;
  for i := 1 to m do
  begin
    while (j <= l) and (b2[j] = '*') do
      inc(j);
    if (j > l) or (b2[j] <> b[i]) then
      quit(_wa, '');
    inc(j);
  end;
  while j < l do
  begin
    if b2[j] <> '*' then
      quit(_wa, '');
    inc(j);
  end;

  j := 0;
  for i := 1 to l do
    if a2[i] <> b2[i] then
      inc(j);

  if j <> pa then
    quit(_wa, 'wa');

  if ja = pa then
    quit(_ok, 'ok');
  if ja > pa then
    quit(_fail, 'wa');
  if ja < pa then
    quit(_wa, 'wa');
end.