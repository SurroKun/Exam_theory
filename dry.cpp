void log( const char* const msg ) {
    std::cout << msg << std::endl;
}


log( "Hello, world!" );

И теперь, если мы захотим поменять формат вывода log, мы можем сделать это безболезненно

void log( const char* const msg ) {
    std::cout << ">>> " << msg << std::endl;
}
