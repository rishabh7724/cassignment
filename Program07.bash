echo "Enter the number to check Armstrong : "
read number

temp=number
n=0
while [ $temp -eq 0 ]
do 
    n=`expr $n + 1`
    temp=`expr $temp / 10`
done
echo $n


power () {
    pow=1
    for((i=1;i<=$m;i++))
    do
    pow=$(($pow*$n))
    done
    echo $pow
    return $pow
}

echo "Enter number and power"
read n
read m

power n m
a=$?
echo "Power ${a}"
