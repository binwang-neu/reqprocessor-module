#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>

// define struct of Version
struct Version
{
  std::string block_number = "";
  std::string tx_id = "";
};

// define struct of Wset
struct Wset
{
  std::string key = "";
  std::string value = "";
  std::string name_space = "";
};

// define struct of TxWriteSet
struct TxWriteSet
{
  std::vector<Wset> pb_wset;
  std::vector<Wset> pv_wset;
};

// define struct of Transaction
struct Transaction
{
  std::string tx_id = "";
  std::string ch_id = "";
  std::string cc_id = "";
  std::string func_name = "";
  std::vector<std::string> args;
  TxWriteSet wSet;
  Version version;
};

// define enum of CSTATE
enum CSTATE {
  SATISFIED,
  UNSATISFIED
};

// define enum of SOURCE
enum SOURCE {
  WS,
  ON,
  OFF
};

// define struct of Binding
struct Binding
{
  std::string id = "";
  std::string version = "";
};

// define struct of Rule
struct Rule
{
  std::string rule_file = "";
  std::string rule_index = "";
  std::string version = "";
};

// define struct of Data
struct Data
{
  std::string entity_name = "";
  std::string entity_value = "";
  SOURCE source;
};


// define struct of CProof
struct CProof
{
  std::string tx_id = "";
  std::vector<std::string> inputs;
  CSTATE status;
  std::string worldstate_hash = "";
  Binding binding;
  std::vector<Rule> rules;
  std::vector<Data> datas;
  std::string func_name = "";
  std::string peer_signature = "";
  std::string tee_pk = "";
  std::string tee_signature = "";
  std::string tee_cert = "";
  std::vector<std::string> quert;
};
