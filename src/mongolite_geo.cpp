//#include "rapidjson/rapidjson.h"
//#include "geojsonsf_RcppExports.h"
//#include "geojson_sf_api.hpp"
//#include "geojson_to_sf.h"

#include <geojson_to_sf.h>
#include <geojson_sfc.h>
#include <Rcpp.h>
using namespace Rcpp;

// notes
// http://www.oracle.com/technetwork/articles/servers-storage-dev/mixingcandcpluspluscode-305840.html#cpp_from_c

//extern "C" void calling_geojson_sf() {
//  mongo_geo_test();
//}

// notes
// https://stackoverflow.com/questions/34056265/converting-an-sexp-from-r-into-a-vector-of-strings-in-c

/*
extern "C" void print_out(SEXP out) {
  Rcpp::Rcout << out << std::endl;
}

*/


extern "C" void call_create_geojson(SEXP out, bool& expand_geometries) {
  //Rcpp::StringVector geojson, bool& expand_geometries
  Rcpp::StringVector geojson = as< Rcpp::StringVector >(out);
  Rcpp::Rcout << "geojson: " <<  geojson << std::endl;
  Rcpp::NumericVector bbox = start_bbox();
  Rcpp::Rcout << "bbox: " << bbox << std::endl;
  //Rcpp::NumericVector nvbox = as< Rcpp::NumericVector >(bbox);
  //SEXP sf = generic_geojson_to_sf(geojson, expand_geometries);
  //SEXP sf;
  //return sf;
}

extern "C" Rcpp::NumericVector call_start_bbox() {
  Rcpp::NumericVector bbox = start_bbox();
  Rcpp::Rcout << bbox << std::endl;
  //Rcpp::NumericVector nvbox = as< Rcpp::NumericVector >(bbox);
  return bbox;
}

extern "C" int manipulate_int(int i) {
  i = i + 1;
  return i;
}
