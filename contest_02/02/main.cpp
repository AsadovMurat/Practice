bool is_can_exit_from_maze(std::vector<std::string> maze, int row, int col) {
    if (maze[row][col] == '#') return false;
    if (maze[row][col] == 'E') return true;
    
    maze[row][col] = '#';


    return is_can_exit_from_maze(maze, row + 1, col) || is_can_exit_from_maze(maze, row - 1, col) || is_can_exit_from_maze(maze, row, col + 1) || is_can_exit_from_maze(maze, row, col - 1);
}
