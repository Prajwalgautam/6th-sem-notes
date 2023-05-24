begin
	integer i;
	integer procedure fibonacci(n);integer n;
	begin
		fibonacci:= if n<3 then 1 else fibonacci(n-1)+fibonacci(n-2);
	end;
	for i:=1 step 1 until 10 do
	begin
		outinteger(1,fibonacci(i))
	end;
end