String JsonRelayString(const char *zone, const char *addr, const char *value, const char *remark ){
    String JsonString; 
    JsonString = "{\"Z\":\"";
    JsonString += zone;
    JsonString += "\",";
    JsonString += "\"S\":\"";
    JsonString += addr;  
    JsonString += "\",";
    JsonString += "\"V\":\"";
    JsonString += value;
    JsonString += "\",";
    JsonString += "\"R\":\"";
    JsonString += remark;
    JsonString += "\"}";

    return(JsonString);
}
