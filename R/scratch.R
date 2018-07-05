#
# library(symbolix.utils)
#
# mRestaurant <- ConnectToMongo(db = "geo_example", collection = "restaurants", usr = "db_user")
#
# qry <- '[
# {
#   "$geoNear" : {
#   "distanceField" : "dist.calculated",
#   "maxDistance" : 1000,
#   "spherical" : true
#   }
# }
# ] '
#
# df <- mRestaurant$aggregate(pipeline = qry)
#
# df <- mRestaurant$iterate()
#
# df <- mRestaurant$find()
#
# jsonFile <- "~/Documents/SVNStuff/Clients/DEV_Symbolix/Blog/GeoMongoDB/Restaurants.json"
#
# ## we can export ndjson to a file
# mRestaurant$export(file(jsonFile), bson = FALSE)
#
# js <- jsonlite::stream_in(file(jsonFile))
#
# geojson_txt <- readLines(file(jsonFile))
# # sf::read_sf(geojson_txt)
#
# ## reads each line, but, the non-geo elements are lost (e.g. name)
# lst <- lapply(geojson_txt, sf::read_sf)
#
# dt <- lapply(lst, spatialdatatable::toSDT )
#
# # sf <- do.call(sf:::rbind.sf, lst)
# # plot(sf)
#
#
#
# geo <- geojsonio::geojson_read(jsonFile, method = "local")
#
#
#
# mRestaurant$export(con = stdout(), bson = FALSE)



# mRestaurant <- ConnectToMongo(db = "geo_example", collection = "restaurants", usr = "db_user")
# ndjson <- mRestaurant$find(ndjson = T, limit = 10)
#
# jsonlite::stream_in(mRestaurant$find(ndjson = T, limit = 10))
#
# geojsonio::geojson_json(ndjson)
# geojsonio::geojson_list(ndjson)
#
# sapply(ndjson, sf::read_sf)
#
# qry <- '[
#   {
#     "$project" : { "name" : 1}
#   }
# ]'
#
# mRestaurant$aggregate(pipeline = qry, ndjson = T )


#
# library(sf)
# library(geojsonsf)
# m <- mongo(collection = "SA2_2016", db = "ABS")
#
# m <- symbolix.utils::connectToMongo(db = "ABS", collection = "SA2_2016", usr = "db_user")
#
# res <- m$find(ndjson = T, limit = 1)
# sf <- geojsonsf::geojson_sf(res)
# sf






