PRAGMA foreign_keys=OFF;
BEGIN TRANSACTION;
CREATE TABLE data(id INTEGER PRIMARY KEY AUTOINCREMENT, uuid TEXT, environment TEXT, unit TEXT, level REAL, timestamp TIMESTAMP);
CREATE INDEX timestamp_idx ON data(timestamp);
CREATE INDEX environment_idx ON data(environment);
COMMIT;
