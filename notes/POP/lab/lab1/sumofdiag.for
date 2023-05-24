	program matrix
	dimension matr(3,3)
	integer matr,s
	s=0
	data matr /4,6,8,7,2,1,6,9,2/
	do 10 i=1,3
		do 20 j=1,3
			if(i.ne.j) goto 20
30			s=s+matr(i,j)
20		continue
10	continue
	write(*,*)'sum=',s
	end

	