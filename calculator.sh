#Addition
if [ "$2" = "+" ]; then echo "$(( $1 + $3 ))"; else echo "$(( $1 $2 $3 ))"; fi
#Subtraction
if [ "$2" = "-" ]; then echo "$(( $1 - $3 ))"; else echo "$(( $1 $2 $3 ))"; fi
#Multiplication
if [ "$2" = "*" ]; then echo "$(( $1 * $3 ))"; else echo "$(( $1 $2 $3 ))"; fi
#Division
if [ "$2" = "/" ]; then echo "$(( $1 / $3 ))"; else echo "$(( $1 $2 $3 ))"; fi
# Exponent operator
if [ "$2" = "**" ]; then echo "$(( $1 ** $3 ))"; else echo "$(( $1 $2 $3 ))"; fi

# Hexadecimal output
if [ "$4" = "hex" ]; then printf "0x%X
" "$(( $1 $2 $3 ))"; exit; fi
