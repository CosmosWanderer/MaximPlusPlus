# Install script for directory: D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/_deps/googletest-src/googlemock

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/core/antlr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/_deps/googletest-src/googlemock/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/lib/Debug/gmockd.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/lib/Release/gmock.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/lib/MinSizeRel/gmock.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/lib/RelWithDebInfo/gmock.lib")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/lib/Debug/gmock_maind.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/lib/Release/gmock_main.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/lib/MinSizeRel/gmock_main.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/lib/RelWithDebInfo/gmock_main.lib")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/bin/${CMAKE_INSTALL_CONFIG_NAME}/gmockd.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/bin/${CMAKE_INSTALL_CONFIG_NAME}/gmock.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/bin/${CMAKE_INSTALL_CONFIG_NAME}/gmock.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/bin/${CMAKE_INSTALL_CONFIG_NAME}/gmock.pdb")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/bin/${CMAKE_INSTALL_CONFIG_NAME}/gmock_maind.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/bin/${CMAKE_INSTALL_CONFIG_NAME}/gmock_main.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/bin/${CMAKE_INSTALL_CONFIG_NAME}/gmock_main.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/bin/${CMAKE_INSTALL_CONFIG_NAME}/gmock_main.pdb")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/_deps/googletest-build/googletest/generated/gmock.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/_deps/googletest-build/googletest/generated/gmock_main.pc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/programs/c++/UnProg/ANTLRParser/MPP/MaximPlusPlus/external/antlr4-runtime-cpp/build/_deps/googletest-build/googletest/cmake_install.cmake")

endif()

