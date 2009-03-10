/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCTABLEROW_H
#define IFC2X3_IFCTABLEROW_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcTable;

    /**
     */
    class IFC2X3_DLL_DEF IfcTableRow : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'RowCells'.
         * 
         */
        virtual List_IfcValue_1_n &getRowCells();
        /**
         * (const) Returns the value of the explicit attribute 'RowCells'.
         * 
         * @return the value of the explicit attribute 'RowCells'
         */
        virtual const List_IfcValue_1_n &getRowCells() const;
        /**
         * Sets the value of the explicit attribute 'RowCells'.
         * 
         * @param value
         */
        virtual void setRowCells(const List_IfcValue_1_n &value);
        /**
         * Gets the value of the explicit attribute 'IsHeading'.
         * 
         */
        virtual Step::Boolean getIsHeading();
        /**
         * (const) Returns the value of the explicit attribute 'IsHeading'.
         * 
         * @return the value of the explicit attribute 'IsHeading'
         */
        virtual const Step::Boolean getIsHeading() const;
        /**
         * Sets the value of the explicit attribute 'IsHeading'.
         * 
         * @param value
         */
        virtual void setIsHeading(Step::Boolean value);
        /**
         * Gets the value of the inverse attribute 'OfTable'.
         * 
         */
        IfcTable *getOfTable();
        /**
         * (const) Returns the value of the explicit attribute 'OfTable'.
         * 
         * @return the value of the explicit attribute 'OfTable'
         */
        virtual const IfcTable *getOfTable() const;
        friend class Inverted_IfcTable_Rows_type;
        friend class IfcTable;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTableRow(Step::Id id, Step::SPFData *args);
        virtual ~IfcTableRow();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTableRow &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_IfcValue_1_n m_rowCells;
        /**
         */
        Step::Boolean m_isHeading;
        /**
         */
        Step::ObsPtr< IfcTable > m_ofTable;

    };

}

#endif // IFC2X3_IFCTABLEROW_H
