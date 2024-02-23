PriorityQueue programos naudojimo instrukcija

About: Programa leidzia sukurti kintamaji PriorityQueue, kuris yra priority queue tipo duomenų stuktūra.

FUNKCIJOS:

1) void initializeQueue(PriorityQueue* queue) - Inicializuoja sukurtą kintamajį. PASTABA! (Prieš naudojant kitas funkcijas PRIVALOMA inicializuoti kintamajį)
2) void enqueue(PriorityQueue* queue, int data, int priority) - Į sąrašą įdedamas elementas, kurio reikšmė data, o prioritetas priority. Sąrašę nariai yra surikiuoti prioriteto mažėjimo tvarka.
3) int dequeue(PriorityQueue* queue) - Iš sąrašo panaikinamas elementas turintis didžiausią prioritetą. Sekmės atveju grąžinamas 0, neekmės atveju grąžinamas -1.
4) int getFirstElement(PriorityQueue* queue) - Iš sąrašo grąžinama didžiausią prioritetą turinčio elemento reikšmė. Pats elementas sąraše lieka. Jeigu sąrašas tuščias, funkcija nieko negrąžina.
5) int isEmpty(PriorityQueue* queue) - Grąžina 1, jeigu sąrašas tuščias, ir 0 jeigu jis turi bent 1 elementą.
6) void displayQueue(PriorityQueue* queue) - Į ekraną atspausdinamos visi sąrašo elementai su jų reikšmėmis ir prioritetais. Jeigu sąrašas tuščias, bus atspausdinta "Queue is empty."
7) void destroyQueue(PriorityQueue* queue) - Ištrinamos visos sąrašo reikšmės ir sąrašas sunaikinamas.


Dėl klaidų kreiptis į Kristupą Krivicką.
