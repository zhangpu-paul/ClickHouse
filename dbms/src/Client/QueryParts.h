#ifndef CLICKHOUSE_QUERY_PARTS_H
#define CLICKHOUSE_QUERY_PARTS_H

typedef struct {
    char *name;			/* User printable name of the function. */
} QUERYPART;

QUERYPART queryParts[] = {
        // CREATE DATABASE, TABLE, VIEW
        {(char *)"CREATE"},
        {(char *)"DATABASE"},
        {(char *)"IF"},
        {(char *)"NOT"},
        {(char *)"EXISTS"},
        {(char *)"TEMPORARY"},
        {(char *)"TABLE"},
        {(char *)"ON"},
        {(char *)"CLUSTER"},
        {(char *)"DEFAULT"},
        {(char *)"MATERIALIZED"},
        {(char *)"ALIAS"},
        {(char *)"ENGINE"},
        {(char *)"AS"},
        {(char *)"VIEW"},
        {(char *)"POPULATE"},
        //ATTACH/DETACH
        {(char *)"ATTACH"},
        {(char *)"DETACH"},
        //DROP
        {(char *)"DROP"},
        //RENAME
        {(char *)"RENAME"},
        {(char *)"TO"},
        //ALTER
        {(char *)"ALTER"},
        {(char *)"ADD"},
        {(char *)"MODIFY"},
        {(char *)"COLUMN"},
        {(char *)"AFTER"},
        //PARTITIONS
        {(char *)"PARTITION"},
        {(char *)"PART"},
        {(char *)"FREEZE"},
        {(char *)"FETCH"},
        {(char *)"FROM"},
        //SHOW DATABASES,TABLES,PROCESSLIST
        {(char *)"SHOW"},
        {(char *)"INTO"},
        {(char *)"OUTFILE"},
        {(char *)"FORMAT"},
        {(char *)"TABLES"},
        {(char *)"LIKE"},
        {(char *)"PROCESSLIST"},
        //DESCRIBE
        {(char *)"DESCRIBE"},
        {(char *)"DESC"},
        //USE
        {(char *)"USE"},
        //SET
        {(char *)"SET"},
        //OPTIMIZE
        {(char *)"OPTIMIZE"},
        {(char *)"FINAL"},
        //INSERT
        {(char *)"INSERT"},
        {(char *)"VALUES"},
        //SELECT
        {(char *)"SELECT"},
        {(char *)"DISTINCT"},
        {(char *)"SAMPLE"},
        {(char *)"ARRAY"},
        {(char *)"JOIN"},
        {(char *)"GLOBAL"},
        {(char *)"ANY"},
        {(char *)"ALL"},
        {(char *)"INNER"},
        {(char *)"LEFT"},
        {(char *)"USING"},
        {(char *)"PREWHERE"},
        {(char *)"WHERE"},
        {(char *)"GROUP"},
        {(char *)"BY"},
        {(char *)"WITH"},
        {(char *)"TOTALS"},
        {(char *)"HAVING"},
        {(char *)"ORDER"},
        {(char *)"LIMIT"},
        {(char *)"UNION"},
        {(char *)"AND"},
        {(char *)"OR"},
        {(char *)"ASC"},
        //IN
        {(char *)"IN"},
        //KILL QUERY
        {(char *)"KILL"},
        {(char *)"QUERY"},
        {(char *)"SYNC"},
        {(char *)"ASYNC"},
        {(char *)"TEST"},
        //Table engines
        {(char *)"TinyLog"},
        {(char *)"Log"},
        {(char *)"Memory"},
        {(char *)"MergeTree"},
        {(char *)"ReplacingMergeTree"},
        {(char *)"SummingMergeTree"},
        {(char *)"AggregateFunction"},
        {(char *)"CollapsingMergeTree"},
        {(char *)"GraphiteMergeTree"},
        {(char *)"ReplicatedMergeTree"},
        {(char *)"ReplicatedSummingMergeTree"},
        {(char *)"ReplicatedReplacingMergeTree"},
        {(char *)"ReplicatedAggregatingMergeTree"},
        {(char *)"ReplicatedCollapsingMergeTree"},
        {(char *)"ReplicatedGraphiteMergeTree"},
        {(char *)"Distributed"},
        {(char *)"Dictionary"},
        {(char *)"Merge"},
        {(char *)"Buffer"},
        {(char *)"File"},
        {(char *)"Null"},
        {(char *)"Set"},
        {(char *)"Join"},
        {(char *)"View"},
        {(char *)"MaterializedView"},
        {(char *)"Kafka"},
        {(char *)"MySQL"},
        //FORMATS
        {(char *)"TabSeparated"},
        {(char *)"TabSeparatedRaw"},
        {(char *)"TabSeparatedWithNames"},
        {(char *)"TSVWithNames"},
        {(char *)"TabSeparatedWithNamesAndTypes"},
        {(char *)"TSVWithNamesAndTypes"},
        {(char *)"CSV"},
        {(char *)"CSVWithNames"},
        {(char *)"Values"},
        {(char *)"Vertical"},
        {(char *)"VerticalRaw"},
        {(char *)"JSON"},
        {(char *)"JSONCompact"},
        {(char *)"JSONEachRow"},
        {(char *)"TSKV"},
        {(char *)"Pretty"},
        {(char *)"PrettyCompact"},
        {(char *)"PrettyCompactMonoBlock"},
        {(char *)"PrettyNoEscapes"},
        {(char *)"PrettySpace"},
        {(char *)"RowBinary"},
        {(char *)"Native"},
        {(char *)"XML"},
        {(char *)"CapnProto"},
        //TYPES
        {(char *)"Int8"},
        {(char *)"Int16"},
        {(char *)"Int32"},
        {(char *)"Int64"},
        {(char *)"UInt8"},
        {(char *)"UInt16"},
        {(char *)"UInt32"},
        {(char *)"UInt64"},
        {(char *)"Float32"},
        {(char *)"Float64"},
        {(char *)"Boolean"},
        {(char *)"String"},
        {(char *)"FixedString"},
        {(char *)"Date"},
        {(char *)"DateTime"},
        {(char *)"Enum8"},
        {(char *)"Enum16"},
        {(char *)"Array"},
        {(char *)"Tuple"},
        {(char *)"Nested"},
        {(char *)"Expression"},
        {(char *)"Set"},
        //FUNCTIONS
        {(char *)"plus"},
        {(char *)"minus"},
        {(char *)"multiply"},
        {(char *)"divide"},
        {(char *)"intDiv"},
        {(char *)"intDivOrZero"},
        {(char *)"modulo"},
        {(char *)"negate"},
        {(char *)"abs"},
        {(char *)"gcd"},
        {(char *)"lcm"},
        {(char *)"equals"},
        {(char *)"notEquals"},
        {(char *)"less"},
        {(char *)"greater"},
        {(char *)"lessOrEquals"},
        {(char *)"greaterOrEquals"},
        {(char *)"and"},
        {(char *)"or"},
        {(char *)"not"},
        {(char *)"xor"},
        {(char *)"toUInt8"},
        {(char *)"toUInt16"},
        {(char *)"toUInt32"},
        {(char *)"toUInt64"},
        {(char *)"toInt8"},
        {(char *)"toInt16"},
        {(char *)"toInt32"},
        {(char *)"toInt64"},
        {(char *)"toFloat32"},
        {(char *)"toFloat64"},
        {(char *)"toUInt8OrZero"},
        {(char *)"toUInt16OrZero"},
        {(char *)"toUInt32OrZero"},
        {(char *)"toUInt64OrZero"},
        {(char *)"toInt8OrZero"},
        {(char *)"toInt16OrZero"},
        {(char *)"toInt32OrZero"},
        {(char *)"toInt64OrZero"},
        {(char *)"toFloat32OrZero"},
        {(char *)"toFloat64OrZero"},
        {(char *)"toDate"},
        {(char *)"toDateTime"},
        {(char *)"toString"},
        {(char *)"toFixedString"},
        {(char *)"toStringCutToZero"},
        {(char *)"reinterpretAsUInt8"},
        {(char *)"reinterpretAsUInt16"},
        {(char *)"reinterpretAsUInt32"},
        {(char *)"reinterpretAsUInt64"},
        {(char *)"reinterpretAsInt8"},
        {(char *)"reinterpretAsInt16"},
        {(char *)"reinterpretAsInt32"},
        {(char *)"reinterpretAsInt64"},
        {(char *)"reinterpretAsFloat32"},
        {(char *)"reinterpretAsFloat64"},
        {(char *)"reinterpretAsDate"},
        {(char *)"reinterpretAsDateTime"},
        {(char *)"reinterpretAsString"},
        {(char *)"CAST"},
        {(char *)"toYear"},
        {(char *)"toMonth"},
        {(char *)"toDayOfMonth"},
        {(char *)"toDayOfWeek"},
        {(char *)"toHour"},
        {(char *)"toMinute"},
        {(char *)"toSecond"},
        {(char *)"toMonday"},
        {(char *)"toStartOfMonth"},
        {(char *)"toStartOfQuarter"},
        {(char *)"toStartOfYear"},
        {(char *)"toStartOfMinute"},
        {(char *)"toStartOfFiveMinute"},
        {(char *)"toStartOfFifteenMinutes"},
        {(char *)"toStartOfHour"},
        {(char *)"toStartOfDay"},
        {(char *)"toTime"},
        {(char *)"toRelativeYearNum"},
        {(char *)"toRelativeMonthNum"},
        {(char *)"toRelativeWeekNum"},
        {(char *)"toRelativeDayNum"},
        {(char *)"toRelativeHourNum"},
        {(char *)"toRelativeMinuteNum"},
        {(char *)"toRelativeSecondNum"},
        {(char *)"now"},
        {(char *)"today"},
        {(char *)"yesterday"},
        {(char *)"timeSlot"},
        {(char *)"empty"},
        {(char *)"notEmpty"},
        {(char *)"length"},
        {(char *)"lengthUTF8"},
        {(char *)"lower"},
        {(char *)"upper"},
        {(char *)"lowerUTF8"},
        {(char *)"upperUTF8"},
        {(char *)"reverse"},
        {(char *)"reverseUTF8"},
        {(char *)"concat"},
        {(char *)"substringUTF8"},
        {(char *)"appendTrailingCharIfAbsent"},
        {(char *)"convertCharset"},
        {(char *)"position"},
        {(char *)"positionUTF8"},
        {(char *)"match"},
        {(char *)"extract"},
        {(char *)"extractAll"},
        {(char *)"like"},
        {(char *)"notLike"},
        {(char *)"replaceOne"},
        {(char *)"replaceAll"},
        {(char *)"replaceRegexpOne"},
        {(char *)"replaceRegexpAll"},
        {(char *)"if"},
        {(char *)"e"},
        {(char *)"pi"},
        {(char *)"exp"},
        {(char *)"log"},
        {(char *)"exp2"},
        {(char *)"log2"},
        {(char *)"exp10"},
        {(char *)"log10"},
        {(char *)"sqrt"},
        {(char *)"cbrt"},
        {(char *)"erf"},
        {(char *)"erfc"},
        {(char *)"lgamma"},
        {(char *)"tgamma"},
        {(char *)"sin"},
        {(char *)"cos"},
        {(char *)"tan"},
        {(char *)"asin"},
        {(char *)"acos"},
        {(char *)"atan"},
        {(char *)"pow"},
        {(char *)"floor"},
        {(char *)"ceil"},
        {(char *)"round"},
        {(char *)"roundToExp2"},
        {(char *)"roundDuration"},
        {(char *)"roundAge"},
        {(char *)"emptyArrayUInt8"},
        {(char *)"emptyArrayUInt16"},
        {(char *)"emptyArrayUInt32"},
        {(char *)"emptyArrayUInt64"},
        {(char *)"emptyArrayInt8"},
        {(char *)"emptyArrayInt16"},
        {(char *)"emptyArrayInt32"},
        {(char *)"emptyArrayInt64"},
        {(char *)"emptyArrayFloat32"},
        {(char *)"emptyArrayFloat64"},
        {(char *)"emptyArrayDate"},
        {(char *)"emptyArrayDateTime"},
        {(char *)"emptyArrayString"},
        {(char *)"emptyArrayToSingle"},
        {(char *)"range"},
        {(char *)"array"},
        {(char *)"arrayConcat"},
        {(char *)"arrayElement"},
        {(char *)"has"},
        {(char *)"indexOf"},
        {(char *)"countEqual"},
        {(char *)"arrayEnumerate"},
        {(char *)"arrayEnumerateUniq"},
        {(char *)"arrayPopBack"},
        {(char *)"arrayPopFront"},
        {(char *)"arrayPushBack"},
        {(char *)"arrayPushFront"},
        {(char *)"arraySlice"},
        {(char *)"arrayUniq"},
        {(char *)"arrayJoin"},
        {(char *)"splitByChar"},
        {(char *)"splitByString"},
        {(char *)"arrayStringConcat"},
        {(char *)"alphaTokens"},
        {(char *)"bitAnd"},
        {(char *)"bitOr"},
        {(char *)"bitXor"},
        {(char *)"bitNot"},
        {(char *)"bitShiftLeft"},
        {(char *)"bitShiftRight"},
        {(char *)"halfMD5"},
        {(char *)"MD5"},
        {(char *)"sipHash64"},
        {(char *)"sipHash128"},
        {(char *)"cityHash64"},
        {(char *)"intHash32"},
        {(char *)"intHash64"},
        {(char *)"SHA1"},
        {(char *)"SHA224"},
        {(char *)"SHA256"},
        {(char *)"URLHash"},
        {(char *)"rand"},
        {(char *)"rand64"},
        {(char *)"hex"},
        {(char *)"unhex"},
        {(char *)"UUIDStringToNum"},
        {(char *)"UUIDNumToString"},
        {(char *)"bitmaskToList"},
        {(char *)"bitmaskToArray"},
        {(char *)"protocol"},
        {(char *)"domain"},
        {(char *)"domainWithoutWWW"},
        {(char *)"topLevelDomain"},
        {(char *)"firstSignificantSubdomain"},
        {(char *)"cutToFirstSignificantSubdomain"},
        {(char *)"path"},
        {(char *)"pathFull"},
        {(char *)"queryString"},
        {(char *)"fragment"},
        {(char *)"queryStringAndFragment"},
        {(char *)"extractURLParameter"},
        {(char *)"extractURLParameters"},
        {(char *)"extractURLParameterNames"},
        {(char *)"URLHierarchy"},
        {(char *)"URLPathHierarchy"},
        {(char *)"decodeURLComponent"},
        {(char *)"cutWWW"},
        {(char *)"cutQueryString"},
        {(char *)"cutFragment"},
        {(char *)"cutQueryStringAndFragment"},
        {(char *)"cutURLParameter"},
        {(char *)"IPv4NumToString"},
        {(char *)"IPv4StringToNum"},
        {(char *)"IPv6NumToString"},
        {(char *)"IPv6StringToNum"},
        {(char *)"visitParamHas"},
        {(char *)"visitParamExtractUInt"},
        {(char *)"visitParamExtractInt"},
        {(char *)"visitParamExtractFloat"},
        {(char *)"visitParamExtractBool"},
        {(char *)"visitParamExtractRaw"},
        {(char *)"visitParamExtractString"},
        {(char *)"arrayMap"},
        {(char *)"arrayFilter"},
        {(char *)"arrayCount"},
        {(char *)"arrayExists"},
        {(char *)"arrayAll"},
        {(char *)"arraySum"},
        {(char *)"arrayFirst"},
        {(char *)"arrayFirstIndex"},
        {(char *)"arrayCumSum"},
        {(char *)"arraySort"},
        {(char *)"arrayReverseSort"},
        {(char *)"hostName"},
        {(char *)"visibleWidth"},
        {(char *)"toTypeName"},
        {(char *)"blockSize"},
        {(char *)"materialize"},
        {(char *)"ignore"},
        {(char *)"sleep"},
        {(char *)"currentDatabase"},
        {(char *)"isFinite"},
        {(char *)"isInfinite"},
        {(char *)"isNaN"},
        {(char *)"hasColumnInTable"},
        {(char *)"bar"},
        {(char *)"transform"},
        {(char *)"formatReadableSize"},
        {(char *)"least"},
        {(char *)"greatest"},
        {(char *)"uptime"},
        {(char *)"version"},
        {(char *)"rowNumberInAllBlocks"},
        {(char *)"runningDifference"},
        {(char *)"MACNumToString"},
        {(char *)"MACStringToNum"},
        {(char *)"MACStringToOUI"},
        {(char *)"dictGetUInt8"},
        {(char *)"dictGetUInt16"},
        {(char *)"dictGetUInt32"},
        {(char *)"dictGetUInt64"},
        {(char *)"dictGetInt8"},
        {(char *)"dictGetInt16"},
        {(char *)"dictGetInt32"},
        {(char *)"dictGetInt64"},
        {(char *)"dictGetFloat32"},
        {(char *)"dictGetFloat64"},
        {(char *)"dictGetDate"},
        {(char *)"dictGetDateTime"},
        {(char *)"dictGetUUID"},
        {(char *)"dictGetString"},
        {(char *)"dictGetTOrDefault"},
        {(char *)"dictIsIn"},
        {(char *)"dictGetHierarchy"},
        {(char *)"dictHas"},
        {(char *)"regionToCity"},
        {(char *)"regionToArea"},
        {(char *)"regionToDistrict"},
        {(char *)"regionToCountry"},
        {(char *)"regionToContinent"},
        {(char *)"regionToPopulation"},
        {(char *)"regionIn"},
        {(char *)"regionHierarchy"},
        {(char *)"regionToName"},
        {(char *)"globalIn"},
        {(char *)"in"},
        {(char *)"notIn"},
        {(char *)"globalNotIn"},
        {(char *)"tuple"},
        {(char *)"tupleElement"},
        {(char *)"count"},
        {(char *)"any"},
        {(char *)"anyHeavy"},
        {(char *)"anyLast"},
        {(char *)"min"},
        {(char *)"max"},
        {(char *)"argMin"},
        {(char *)"argMax"},
        {(char *)"sum"},
        {(char *)"sumWithOverflow"},
        {(char *)"sumMap"},
        {(char *)"avg"},
        {(char *)"uniq"},
        {(char *)"uniqCombined"},
        {(char *)"uniqHLL12"},
        {(char *)"uniqExact"},
        {(char *)"groupArray"},
        {(char *)"groupArrayInsertAt"},
        {(char *)"groupUniqArray"},
        {(char *)"quantile"},
        {(char *)"quantileDeterministic"},
        {(char *)"quantileTiming"},
        {(char *)"quantileTimingWeighted"},
        {(char *)"quantileExact"},
        {(char *)"quantileExactWeighted"},
        {(char *)"quantileTDigest"},
        {(char *)"median"},
        {(char *)"quantiles"},
        {(char *)"varSamp"},
        {(char *)"varPop"},
        {(char *)"stddevSamp"},
        {(char *)"stddevPop"},
        {(char *)"topK"},
        {(char *)"covarSamp"},
        {(char *)"covarPop"},
        {(char *)"corr"},
        {(char *)"sequenceMatch"},
        {(char *)"sequenceCount"},
        {(char *)"windowFunnel"},
        {(char *)"uniqUpTo"},
        //END OF LIST
        {(char *)nullptr},
};

#endif //CLICKHOUSE_QUERY_PARTS_H
