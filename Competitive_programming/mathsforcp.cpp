//modular arithmetic - it resets the limit when they exceed a limit, avoiding a overflow
// modular addition- to prevent overflow(a%m+b%m)%m
// modular subtraction- ((a%m - b%m)+m)%m
// modular multiplication - ((a%m)* (b%m))%m , operated from left to right
// GCD- largest positive integer that divides each of the integers,(if we subtract a smaller number from a larger one(we reduce a larger number)), gcd doesn't change
// gcd(a-b, b)=g
// LCM- smallest positive integer that is divisible by each of the integers
// lcm(a,b)= a*b/gcd(a,b)
// gcd takes the minimum of two powers and lcm takes the maximum of two powers
// gcd(a,b) * lcm(a,b)= a*b
// gcd(a, a+1)=1- they are co prime numbers
// gcd and lcm are associative in nature
// gcd(a,b)<=min(a,b)
// 1e9+7 is a prime
// primality testing- to determine whether a number is prime or composite
//brute method
bool is_prime(int n)
{
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
        return n>1;
    }
}

//sqrt method
bool is_prime(int n)
{
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
        return n>1;
    }
}

//prime factorisation- trial division method,
vector<int> factor(int n)
{
    vector<int> fact:
    for(long long d=2; d*d<=n; d++){
        while(n%d==0){
            facts.push_back(d):
            n/=d;
        }
    }
    if(n>1){
        facts.push_back(n);
    }
    return facts;
}
// best tc-

