#include "rapidjson/rapidjson.h"
//#include <cstdlib>

#include "geojson_to_sf.h"

#include <Rcpp.h>
using namespace Rcpp;

// notes
// http://www.oracle.com/technetwork/articles/servers-storage-dev/mixingcandcpluspluscode-305840.html#cpp_from_c

extern "C" {
  void printing_from_cpp();
  void print_from_geojson_cpp();
}

void printing_from_cpp() {
  std::cout << "printing from mongolite_geo_cpp" << std::endl;
}

void print_from_geojson_cpp() {
  Rcpp::StringVector geojson;
  bool expand_geometries = false;
  Rcpp::List lst = generic_geojson_to_sf(geojson, expand_geometries);
}
