// Copyright 2021 ak-kuznetsov <a.kuznetsov2701@mail.ru>

#include <Client.hpp>
int main(int argc, char* argv[]) {
  Client client(argc, argv);
  client.Run();
}

//./cmake-build-debug/demo  http://localhost:8080/v1/api/suggest
//{\"input\":\"hel\"}
