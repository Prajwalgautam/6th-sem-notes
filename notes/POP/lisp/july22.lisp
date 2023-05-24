
defun count-backwards (x) (
	do ( (i x (- i 1)) ) ( (< i 1) nil) (format t "~s " i) )


defun my-length (mylist) (
		let ( (count 0) ) (dolist (element mylist count) (setf count (+ count 1) ) ) 
)

defun power-of-two (x) (
let ( (count 1) ) (dotimes (i x count) ( setf count (* count 2)) ) 
)

defun greatest-num (mylist) (
let ( (grt (car mylist) ) ) (dolist (element mylist grt) (cond ( (> element grt) (setf grt element)) ) )
)

defun all-integer (mylist) (
let( (inte '()))
(dolist (element mylist (reverse inte)) ( cond ( (integerp element) (setf inte (cons element inte) ) ) ) )
)

defun first-integer (mylist) (
dolist (element mylist) ( cond ( (integerp element) (return element) ) )  
)

defun my-average (mylist)(
let( (sumn 0) ) ( dolist (element mylist ( * (/ sumn (length mylist)) 1.0) ) ( setf sumn (+ sumn element)) )
)