/* _load.cpp
 *
 * This file is generated. Do not modify.
 */

#include <remuv/mongo/mongo.h>

int mongo_load(void);
int mongoMain(int argc, char* argv[]);

#ifdef __cplusplus
extern "C"
#endif
REMUV_MONGO_EXPORT int cortomain(int argc, char* argv[]) {
    if (corto_load("/corto/fmt/json", 0, NULL)) return -1;
    if (corto_load("/remuv/mongo/driver/mongocxx", 0, NULL)) return -1;
    if (corto_load("/remuv", 0, NULL)) return -1;
    if (mongo_load()) return -1;
    if (mongoMain(argc, argv)) return -1;
    return 0;
}
