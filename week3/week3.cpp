 Pair::Pair(int a, int b){
  pa = new int;
  *pa = a;
  pb = new int;
  *pb = b;
}
Pair::Pair(const Pair & other){
  pa = new int;
  *pa = *other.pa;
  pb = new int;
  *pb = *other.pb;
}
Pair::~Pair(){
  delete pa;
  delete pb;
} 
int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  delete hp;
  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}