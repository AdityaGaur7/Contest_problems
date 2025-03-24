const { MongoClient } = require('mongodb');
// const MongoClient =require('mongodb').MongoClient;
const url = 'mongodb://localhost:27017';
const database = 'e-comm';
const client = new MongoClient(url);

async function dbconnection() {
    let result = await client.connect();
     db = result.db(database);
     let collection= db.collection('Product');
    let data = await collection.find({}).toArray();
    console.log(data);
}


dbconnection();