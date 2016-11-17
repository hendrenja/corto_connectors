/* _project.cpp
 *
 * This file is generated. Do not modify.
 */

#include <recorto/mongo/mongo.h>
#include <recorto/mongo/_project.h>

int mongoMain(int argc, char* argv[]);

int mongo_load(void);

#ifdef __cplusplus
extern "C"
#endif
RECORTO_MONGO_EXPORT int cortomain(int argc, char* argv[]) {
    if (corto_load("/corto/fmt/json", 0, NULL)) return -1;
    if (corto_load("/recorto/mongo/driver/mongocxx", 0, NULL)) return -1;
    if (corto_load("/recorto", 0, NULL)) return -1;
    if (mongo_load()) return -1;
    if (mongoMain(argc, argv)) return -1;
    return 0;
}
