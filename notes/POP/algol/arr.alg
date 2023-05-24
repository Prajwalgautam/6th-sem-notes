begin
	integer i;
	integer array myarray[10:20];
	procedure initialize_array(a,l,u);
	integer l,u;
	integer array a;
	begin
		integer i;
		for i:=l step 1 until u do
		a[i]:=i*i;
	end;
	initialize_array(myarray,10,20);
	for i:=10 step 1 until 20 do
		outinteger(1,myarray[i]);
end