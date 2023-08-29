Readme Dante's Star

Solver :

Algorithme de backtracking : 

--->explore le labyrinthe en se déplaçant de noeud en noeud jusqu'à ce qu'il atteigne un point mort
-->revient en arrière et essaie un autre chemin. 

explore de nombreux chemins inutiles avant de trouver la solution.

Algorithme BFS :  

-->explore le labyrinthe en parcourant tous les noeuds à la même profondeur avant de passer à la profondeur suivante. 

--->trouve la solution la plus courte en parcourant tous les noeuds à une distance donnée[NOTE] avant de passer à la suivante.

[NOTE]: on sait ou est l'entrée et la sortie [haut gauche][bas droit].

BFS NOTE :

    struct Node { int row, col; struct Node* parent; };: Définition de la structure Node qui représente un nœud dans le graphe.

    void getPath(struct Node* node, s_t *data): Définition d'une fonction pour récupérer le chemin de la solution.

    if(node->parent == NULL) { return; }: Si le nœud parent est nul, la fonction se termine.

    getPath(node->parent, data);: Appelle récursivement la fonction pour le nœud parent.

    data->maze[node->row][node->col] = 'o';: Ajoute un marqueur 'o' sur la position du nœud dans le labyrinthe.

    void bfs(int startRow, int startCol, int endRow, int endCol, s_t *data, bfs_t *bfs_s): Définition de la fonction de recherche en largeur d'abord.

    int visited[bfs_s->ROWS][bfs_s->COLS];: Création d'un tableau visité pour stocker les positions visitées.

    memset(visited, 0, sizeof(visited));: Initialise le tableau visité à zéro.

    struct Node* start = malloc(sizeof(struct Node));: Alloue de la mémoire pour la structure Node pour le nœud de départ.

    start->row = startRow; start->col = startCol; start->parent = NULL;: Initialise le nœud de départ avec la position de départ et un nœud parent nul.

    visited[startRow][startCol] = 1;: Marque la position de départ comme visitée.

    struct Node* queue[bfs_s->ROWS*bfs_s->COLS]; int front = -1; int rear = -1;: Création d'une file d'attente pour stocker les nœuds à explorer.

    queue[++rear] = start;: Ajoute le nœud de départ à la file d'attente.

    while(front != rear) {: Boucle principale qui explore les nœuds de la file d'attente.

    struct Node* current = queue[++front];: Récupère le premier nœud de la file d'attente.

    if(current->row == endRow && current->col == endCol) { getPath(current, data); return; }: Si le nœud actuel est le nœud d'arrivée, appelle la fonction getPath pour obtenir le chemin et termine la fonction.

    if(current->row - 1 >= 0 && data->maze[current->row - 1][current->col] == '*' && !visited[current->row - 1][current->col]) { struct Node* north = malloc(sizeof(struct Node)); north->row = current->row - 1; north->col = current->col; north->parent = current; visited[north->row][north->col] = 1; queue[++rear] = north; }: Explore le nœud au nord du nœud actuel s'il n'a pas été visité et qu'il est accessible.

    `if(current->col + 1 < bfs_s->COLS && data->maze[current->row][current->col + 1] == '' && !visited[current->row][current->col + 1]) { struct Node east = malloc(sizeof(struct Node)); east->row = current->row; east->col = current->col + 1; east->parent = current; visited[east->row][east->col] = 1; queue[++rear] = east; }`: Explore le nœud à l'est du nœud actuel s'il n'a pas été visité et qu'il est accessible.

    if(current->row + 1 < bfs_s->ROWS && data->maze[current->row + 1][current->col] == '*' && !visited[current->row + 1][current->col]) { struct Node* south = malloc(sizeof(struct Node)); south->row = current->row + 1; south->col = current->col; south->parent = current; visited[south->row][south->col] = 1; queue[++rear] = south; }: Explore le nœud au sud du nœud actuel s'il n'a pas été visité et qu'il est accessible.

    if(current->col - 1 >= 0 && data->maze[current->row][current->col - 1] == '*' && !visited[current->row][current->col - 1]) { struct Node* west = malloc(sizeof(struct Node)); west->row = current->row; west->col = current->col - 1; west->parent = current; visited[west->row][west->col] = 1; queue[++rear] = west; }: Explore le nœud à l'ouest du nœud actuel s'il n'a pas été visité et qu'il est accessible.

    void printMaze(s_t *data): Définition de la fonction pour afficher le labyrinthe.

    for(int i = 0; i < data->rows; i++) { for(int j = 0; j < data->cols; j++) { printf("%c ", data->maze[i][j]); } printf("\n"); }: Boucle pour parcourir chaque élément du labyrinthe et l'afficher à l'écran.

    int init_bfs(s_t *data): Définition de la fonction d'initialisation de la recherche en largeur d'abord.

    bfs_t *bfs_s = malloc(sizeof(bfs_t));: Alloue de la mémoire pour la structure bfs_t.

    bfs_s->ROWS = data->rows; bfs_s->COLS = data->cols;: Initialise les variables de la structure bfs_t avec les dimensions du labyrinthe.

    int startRow = 0, startCol = 0; int endRow = data->rows - 1; int endCol = data->cols - 1;: Initialise les positions de départ et d'arrivée.

    bfs(startRow, startCol, endRow, endCol, data, bfs_s);: Appelle la fonction de recherche en largeur d'abord pour trouver le chemin le plus court.

    data->maze[0][0] = 'o';: Ajoute un marqueur 'o' à la position de départ dans le labyrinthe.

    printMaze(data);: Affiche le labyrinthe avec le chemin le plus court trouvé.

    return 0;: Termine la fonction d'initialisation.


