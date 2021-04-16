power () {
    pow=1
    for((i=1;i<=$2;i++))
    do
    pow=$(($pow*$1))
    done
    return $pow
}

echo "Enter the number to check Armstrong : "
read number

temp=$number
n=0
while [ $temp -ne 0 ]
do 
    n=`expr $n + 1`
    temp=`expr $temp / 10`
done

temp=$number
result=0
while [ $temp -ne 0 ]
do
   res=`expr $temp % 10`
   power $res $n
   result=`expr $result + $pow `
   temp=`expr $temp / 10`
done

if [ $result == $number ]
then
   echo "Number is Armstrong"
else
   echo "Number is not Armstrong"
fi
